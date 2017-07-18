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

int balance = 5000;
//==========[Функции]====================//
void start();
void nach();
void info();
void zap();
//=======================================//

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
		cout << "\nЗагрузка100%\n." << endl;
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



void start()
{
	if(balance == 0)
	{
		cout << "Увы, но ты проиграл твой баланс 0! В следующий раз тебе повезёт! (Запусти заного игру)" << endl;
		Sleep(900000);
	}
	stavka = 0;
	cout << "Ставь ставку на своё усмотрение\n" << endl;
	cout << "Введи свою ставку : " << endl;
	cin >> stavka;
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
	cout << "\nЗагрузка100%\n." << endl;
	Sleep(500);
	nach();
}


int main() 
{
	system("color fc");
	setlocale(0,"Russian");
	//начало
	cout << "[1] Запустить игру\n" << endl;
	cout << "[2] INFO[F.A.Q]\n" << endl;
	cout << "[3]\n" << endl;
	cout << "[4]\n" << endl;
	cout << "[5]Выход из игры\n" << endl;
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
		break;
		
		case 4:
		break;
		
		case 5:
			system("cls");
			exit(0);
		break;
		
		default:
		break;
	}
	//не ниже этой строки
	_getch();
	return true;
}
