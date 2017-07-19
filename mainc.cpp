#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <dos.h>
#include <ctime>
//==========[для кода удобства]==========//
using namespace std;
//==========[Переменные]=================//
int stavka;
int win;
int maxrand;
int yes;
int menu;
int ver;
int yesshop;
int balance = 8000;
//==========[Функции]====================//
int main();
void start();
void nach();
void info();
void zap();
void shop();
//=======================================//

void shop()
{
	cout << " Это магазин в котором ты сможешь купить плюшки к своей игре.\n" << endl;
	cout << " Каждый товар стоит свою цену и с баланса будет списоваться стоимость товара.\n" << endl;
	cout << " Если у тебя не будет в балансе coins столько сколько стоит товар ты его не купишь!\n" << endl;
	cout << " Открыть магазин?(1-Да , 0 - Выйти в меню)\n" << endl;
	cin >> yesshop;
	if(yesshop == 1)
	{
		system("cls");
		Sleep (1000);
		cout << "[Товар 1]Вероятность победы 10% (Стоимость 7000coins) " << endl;
		cout << "[Товар 2]Вероятность победы 50%" << endl;
		cout << "Введи номер товара который хочешь купить..." << endl;
		cin >> ver;
		switch(ver)
		{
			case 1:
				if(balance < 7000)
				{
					cout << "Ошибка у тебя нету столько денег" << endl;
				}
				else
				{
					balance = balance - 7000;
					cout << "Ты купил вероятность победы 10%" << endl;
					ver = 1;
					cout << "Магазин открывается через 3 секунды " << endl;
					Sleep(3000);
					system("cls");
					Sleep(500);
					main();
				}
			break;
			case 2:
				balance = balance - 7000;
				if(balance < 20000)
				{
					cout << "Ошибка у тебя нету столько денег" << endl;
				}
				cout << "Ты купил вероятность победы 10%" << endl;
				ver = 1;
				cout << "Магазин открывается через 3 секунды " << endl;
				Sleep(3000);
				system("cls");
				Sleep(500);
				main();
			break;

		}
	
	
	}
	else
	{
		cout << "Идёт загрузка .... " << endl;
		Sleep(400);
		system("cls");
		Sleep(600);
		main();
	}
}
void info()
{
	cout << "Приветствую тебя, это игра <*CASINO*>\n" << endl;
	cout << "Суть этой игры заключается в том чтобы не опустить баланс до 0 и поднять как можно больше денег!\n" << endl;
	cout << "Твой стртовый баланс будет 5000 coins\n" << endl;
	cout << "Удачи тебе в нашей игре и выйграй большой куш!\n.\n.\n." << endl;
}

void zap()
{
		cout << "Игра запускается...." << endl;
		Sleep(1000);
		cout << "\n\nЗагрузка 25%\n." << endl;
		Sleep(500);
		cout << "\nЗагрузка 50%\n." << endl;
		Sleep(500);
		cout << "\nЗагрузка 75%\n." << endl;
		Sleep(500);
		cout << "\nЗагрузка 100%\n." << endl;
		Sleep(500);
		cout << " Игра запущенна!"<< endl;
		Sleep(500);
		cout << "\n================" << endl;
		Sleep(600);
		system("cls");
		start();
		
}


void nach()
{
	win = 0;
	maxrand = 5;
	int mnz;
	mnz = 2;
	srand((unsigned)time(NULL)); // init Rand() function
	win = rand() % maxrand;
	if(ver == 0)
	{
		switch(win)
		{
			case 1:
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
			break;
			case 2:
				cout << "Ты проиграл сожалею тебе" << endl;
				cout << "Баланс : " << balance << endl; 
				cout << "Следующий раунд....." << endl;
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
			break;	
			case 3:
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
			break;
			case 4:
				cout << "Ты проиграл сожалею тебе" << endl;
				cout << "Баланс : " << balance << endl; 
				cout << "Следующий раунд....." << endl;
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
			break;	
			case 5:
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
			break;	
			default :
				cout << "Ты проиграл сожалею тебе" << endl;
				cout << "Баланс : " << balance << endl; 
				cout << "Следующий раунд....." << endl;
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
		}
	}
	if(ver == 1)
	{
		switch(win)
		{
			case 1:
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
			break;
			case 2:
				cout << "Ты проиграл сожалею тебе" << endl;
				cout << "Баланс : " << balance << endl; 
				cout << "Следующий раунд....." << endl;
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
			break;	
			case 3:
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
			break;
			case 4:
				cout << "Ты проиграл сожалею тебе" << endl;
				cout << "Баланс : " << balance << endl; 
				cout << "Следующий раунд....." << endl;
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
			break;	
			case 5:
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
			break;	
			default :
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
		}
	}
}



void start()
{
	if(balance == 0)
	{
		cout << "Увы, но ты проиграл твой баланс 0! В следующий раз тебе повезёт! (Запусти заного игру)" << endl;
		Sleep(900000);
	}
	char mgz[256];
	stavka = 0;
	cout << "Ставь ставку на своё усмотрение\n" << endl;
	cout << "Введи свою ставку : " << endl;
	cin >> stavka;
	cout << "Выйти в меню? (1-ДА, любое что введешь - продолжить игру)" << endl;
	cin >> mgz;
	int itg = atoi(mgz);
	if(stavka > balance)
	{
		cout << "\nОшибка ты не можешь поставить больше coins чем твой баланс !!!" << endl;
		cout << "\nЖди 3 секунды(До новой ставки) игра чистит душу \n.\n." << endl;
		Sleep(3000);
		start();
	}
	if(stavka == 0)
	{
		cout << "Ставка не может быть 0!\n\n" << endl;
		Sleep(100);
		cout << "\nЗагрузка(50%)\n." << endl;
		Sleep(500);
		cout << "\nЗагрузка(100%)\n." << endl;
		Sleep(500);
		cout << " Жди 3 секунды до новой ставки!" << endl;
		Sleep(3000);
		start();
	}
	if(itg == 1)
	{
		system("cls");
		Sleep(100);
		cout << "Срабатывает выход в меню..." << endl;
		cout << "" << endl;
		cout << "Идёт загрузка .... " << endl;
		Sleep(400);
		system("cls");
		Sleep(600);
		main();
		system("cls");
		Sleep(50);
		zap();
		system("cls");
		Sleep(50);
		main();
	}
	Sleep(500);
	cout << "\nЗагрузка....\n" << endl;
	Sleep(500);
	cout << "Ставка ровна : " << stavka << endl;
	balance = balance-stavka;
	cout << "Оствшийся баланс равен : " << balance << endl;
	cout << "\n\nЗагрузка 25%\n." << endl;
	Sleep(500);
	cout << "\nЗагрузка 50%\n." << endl;
	Sleep(500);
	cout << "\nЗагрузка 75%\n." << endl;
	Sleep(500);
	cout << "\nЗагрузка 100%\n." << endl;
	Sleep(500);
	nach();
}


int main() 
{
	system("color fc");
	setlocale(0,"Russian");
	//начало
	cout << " Приветствуем тебя ...\n" << endl;
	cout << " Твой баланс : " << balance << endl;
	cout << "\n\n[1] Запустить игру\n" << endl;
	cout << "[2] INFO[F.A.Q]\n" << endl;
	cout << "[3] Магазин(в разработке)\n" << endl;
	cout << "[4] Раздел в разработке\n" << endl;
	cout << "[5] Выход из игры\n" << endl;
	cout << "(Введи числа от 1-4, выберая пункт меню)" << endl;
	cin >> menu;


	switch(menu)
	{
		case 1:
			cout << "Идёт загрузка .... " << endl;
			Sleep(400);
			system("cls");
			Sleep(600);
			zap();
		break;
		
		case 2:
			cout << "Идёт загрузка .... " << endl;
			Sleep(400);
			system("cls");
			Sleep(600);
			info();
		break;
		
		case 3:
			cout << "Идёт загрузка .... " << endl;
			Sleep(400);
			system("cls");
			Sleep(600);
			shop();
		break;
		
		case 4:
		break;
		
		case 5:
			system("cls");
			exit(0);
		break;
		
		default:
			cout << "Ошибка!" << endl;
			exit(0);
		break;
	}
	//не ниже этой строки
	_getch();
	return true;
}
