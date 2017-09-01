/*
	Name: Casino Game
	Copyright: Sniff.inc
	Author: Alex Ivanov
	Date: 10.07.17 13:27
	Description: Not description.
*/


#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <dos.h>
#include <ctime>
#include <fstream>

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
int balance;
bool cheat = false;
//==========[Функции]====================//
int main();
void start();
void nach();
void info();
void zap();
void shop();
void save1();
void save2();
void chek_bal();
void fsave();
void nuser();
void inus();
void smag();
void fsmag();
void inmag();
void cheats();
void scheat();
void fscheat();
void incheat();
void set();
//=======================================//
void set()
{
	int vib;
	cout << "\t\t\t\t[Настройка]" << endl;
	cout << "Вы можете поменять свой цвет шрифта или цвет фона" << endl;
	cout << "\n[0]Стандарт" << endl;
	cout << "\n[1]Чёрный фон - Серый шрифт" << endl;
	cout << "\n[2]Красный фон - Белый шрифт" << endl;
	cout << "\n[3]Серый фон - Голубой шрифт" << endl;
	cout << "\n[4]Зелёный фон - Белый шрифт" << endl;
	cout << "\n[5]Чёрный фон - Лиловый шрифт" << endl;
	cin >> vib;
	switch(vib)
	{
		case 0:
			system("color fc");
			cout << "Вы будете переведены в меню через 3 секунды" << endl;
			Sleep(3000);
			system ("cls");
			main();
 		break;
		case 1:
			system("color 08");
			cout << "Вы будете переведены в меню через 3 секунды" << endl;
			Sleep(3000);
			system ("cls");
			main();
 		break;
 		
 		case 2:
			system("color 4f");
			cout << "Вы будете переведены в меню через 3 секунды" << endl;
			Sleep(3000);
			system ("cls");
			main();
 		break;
 		
 		case 3:
			system("color 8b");
			cout << "Вы будете переведены в меню через 3 секунды" << endl;
			Sleep(3000);
			system ("cls");
			main();
 		break;
 		
 		case 4:
			system("color 2f");
			cout << "Вы будете переведены в меню через 3 секунды" << endl;
			Sleep(3000);
			system ("cls");
			main();
 		break;
 		
 		case 5:
			system("color 05");
			cout << "Вы будете переведены в меню через 3 секунды" << endl;
			Sleep(3000);
			system ("cls");
			main();
 		break;
	}
}

void incheat()
{
	ifstream save;
	save.open("0x000400.bin",ios_base::out);
	save >> cheat;
	save.close();
}

void fscheat()
{
	ofstream save;
	save.open("0x000400.bin",ios_base::in);
	save << 1;
	save.close();
}

void scheat()
{
	ofstream save;
	save.open("0x000400.bin");
	save << cheat;
	save.close();
}

void cheats()
{
	string a;
	cout << "Введи сюда подарочный код : ";
	cin >>a;
	if(a == "ppp")
	{
		balance = balance + 10000000;
		cout << "Ты разработчик!" << endl;
		Sleep(1000);
		fsave();
		system("cls");
		cout << "Идёт загрузка .... " << endl;
		Sleep(400);
		system("cls");
		Sleep(600);
		main();
	} 
	else if(a == "eazy")
	{
		incheat();
		if (cheat == true)
		{
			cout << "Ошибка ты уже получил подарок!" << endl;
			Sleep(2000);
			system("cls");
			main();
		}
		else
		{
			balance = balance + 1200;
			cout << "Вы получили подарок в размере 1200 coins!" << endl;
			Sleep(1000);
			fscheat();
			fsave();
			Sleep(2000);
			cheat = true;
			system("cls");
			main();
		}
	}
	else if(a == "medium")
	{
		incheat();
		if (cheat == true)
		{
			cout << "Ошибка ты уже получил подарок!" << endl;
			Sleep(2000);
			system("cls");
			main();
		}
		else
		{
			balance = balance + 5000;
			cout << "Вы получили подарок в размере 5000 coins!" << endl;
			Sleep(1000);
			fscheat();
			fsave();
			Sleep(2000);
			cheat = true;
			system("cls");
			main();
		}
	}
	else if(a == "mmmoney")
	{
		incheat();
		if (cheat == true)
		{
			cout << "Ошибка ты уже получил подарок!" << endl;
			Sleep(2000);
			system("cls");
			main();
		}
		else
		{
			balance = balance + 10000;
			cout << "Вы получили подарок в размере 10000 coins!" << endl;
			Sleep(1000);
			fscheat();
			fsave();
			Sleep(2000);
			cheat = true;
			system("cls");
			main();
		}
	}
	else
	{
		
		cout << "Подарочный код не найден!" << endl;
		Sleep(500);
		cheats();
	}
}

void inmag() {
	int bver;
	ifstream mag;
	mag.open("0x000402.bin");
	mag >> ver;
	mag.close();
	if(ver == 0) {
		bver = 0;
	} else if(ver == 1) {
		bver = 10;
	} else if(ver == 2) {
		bver = 50;
	} else if(ver == 3) {
		bver = 100;
	}

	cout << " Купленная вероятность на победу " << bver << "%" << endl;
}

void fsmag() {
	ofstream fsave;
	fsave.open("0x000402.bin",ios_base::out);
	fsave << ver;
	fsave.close();
}

void smag() {
	ofstream save("0x000402.bin");
	save << ver;
	save.close();

}

void inus() {
	char namess[40];
	ifstream name;
	name.open("0x000404.bin",ios_base::in);
	name.getline(namess,40);
	name.close();
	cout << " Приветствуем тебя : " << namess << "!" << endl;

}

void nuser() {
	char names[40];
	cout << "Введи своё имя как к тебе обращаться (на латинице и без пробелов!!!)" << endl;
	cin >> names;
	cout << " Приветсвую тебя " << names << " Подожди немного имя записываеться в файл" << endl;
	ofstream name;
	name.open("0x000404.bin");
	name << names << endl;
	name.close();
	Sleep(1000);
	system("cls");
	Sleep(500);
	cout << "Сейчас тебя перенаправит в меню через 3 секунды." << endl;
	Sleep(3000);
	system("cls");
	main();

}

void fsave() {
	ofstream save;
	save.open("0x000412.bin",ios_base::out);
	save << balance << endl;
	save.close();
}
void chek_bal() {
	ifstream bal;
	bal.open("0x000412.bin",ios_base::in);
	bal >> balance;
	bal.close();
}

void save1() {
	cout << "Идёт сохранение аккаунта ...." << endl;
	Sleep(500);
	ofstream save;
	save.open("0x000412.bin",ios_base::out);
	save << balance << endl;
	save.close();
	fsmag();
	cout << "Аккаунт сохранён. Вы будете перенаправеленны в меню через 3 сек." << endl;
	Sleep(3000);
	system("cls");
	main();
}

void save2() {
	cout << "Создаётся новый аккаунт...\n" << endl;
	cout << "25%\n" << endl;
	Sleep(100);
	cout << "50%\n" << endl;
	Sleep(100);
	cout << "75%\n" << endl;
	Sleep(100);
	cout << "100%\n" << endl;
	Sleep(100);
	ofstream save("0x000412.bin");
	save << 5000 << endl;
	save.close();
	cout << "Аккаунт заного создан! Вы будете перенаправлены в меню через 3 сек." << endl;
	Sleep(3000);
	system("cls");
	main();
}

void shop() {
	cout << " Это магазин в котором ты сможешь купить плюшки к своей игре.\n" << endl;
	cout << " Каждый товар стоит свою цену и с баланса будет списоваться стоимость товара.\n" << endl;
	cout << " Если у тебя не будет в балансе coins столько сколько стоит товар ты его не купишь!\n" << endl;
	cout << " Открыть магазин?(1-Да , 0 - Выйти в меню)\n" << endl;
	cin >> yesshop;
	if(yesshop == 1) {
		system("cls");
		Sleep (1000);
		cout << "[Товар 1]Вероятность победы 10% (Стоимость 7000 coins) " << endl;
		cout << "[Товар 2]Вероятность победы 50% (Стоимость 150000 coins)" << endl;
		cout << "[Товар 3]Вероятность победы 100% (Стоимость 1000000 coins)" << endl;
		cout << "Введи номер товара который хочешь купить..." << endl;
		cin >> ver;
		switch(ver) {
			case 1:
				if(balance < 7000) {
					cout << "Ошибка у тебя нету столько денег" << endl;
				} else {
					balance = balance - 7000;
					cout << "Ты купил вероятность победы 10%" << endl;
					ver = 1;
					cout << "Магазин открывается через 3 секунды " << endl;
					fsave();
					fsmag();
					Sleep(3000);
					system("cls");
					Sleep(500);
					main();
				}
				break;
			case 2:
				if(balance < 150000) {
					cout << "Ошибка у тебя нету столько денег" << endl;
				} else {
					balance = balance - 150000;
					cout << "Ты купил вероятность победы 50%" << endl;
					ver = 2;
					cout << "Магазин открывается через 3 секунды " << endl;
					fsave();
					fsmag();
					Sleep(3000);
					system("cls");
					Sleep(500);
					main();
				}
				break;
			case 3:
				if(balance < 1000000) {
					cout << "Ошибка у тебя нету столько денег" << endl;
				} else {
					balance = balance - 1000000;
					cout << "Ты купил вероятность победы 100%" << endl;
					ver = 3;
					cout << "Магазин открывается через 3 секунды " << endl;
					fsave();
					fsmag();
					Sleep(3000);
					system("cls");
					Sleep(500);
					main();
				}
				break;

		}


	} else {
		cout << "Идёт загрузка .... " << endl;
		Sleep(400);
		system("cls");
		Sleep(600);
		main();
	}
}
void info() {
	int ivih;
	cout << "Приветствую тебя, это игра <*CASINO*>\n" << endl;
	cout << "Суть игры думаю вам понятна.(заработать как можно больше,не проиграть до нуля)\n" << endl;
	cout << "Когда вы запускаете игру в первое поле ввода пишите ставку цифрами\n" << endl;
	cout << "Существует магазин в котором вы можете купить вероятность победы  и т.д\n" << endl;
	cout << "Если вы обнаружили баг или ошибку сообщите сюда! vk.com/timmy_gabani\n" << endl;
	cout << "С уважением SNIFF.inc\n" << endl;
	cout << "Есть вероятность что вы играете на старой версии игры проверяйте обновления тут => vk.com/casinogamecpp\n" << endl;
	cout << "Введите 1 чтобы выйти в меню" << endl;
	cin >> ivih;
	if(ivih == 1) {
		system("cls");
		Sleep(50);
		cout << "Идёт загрузка .... " << endl;
		Sleep(400);
		system("cls");
		Sleep(600);
		main();
	} else {
		cout << "Игра сломалась!..." << endl;
	}
}

void zap() {

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


void nach() {
	win = 0;
	maxrand = 5;
	int mnz;
	mnz = 2;
	srand((unsigned)time(NULL)); // init Rand() function
	win = rand() % maxrand;
	if(ver == 0) {
		switch(win) {
			case 1:
				Beep(540,650);
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 2:
				Beep(460,650);
				cout << "Ты проиграл сожалею тебе" << endl;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 3:
				Beep(540,650);
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 4:
				Beep(460,650);
				cout << "Ты проиграл сожалею тебе" << endl;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 5:
				Beep(540,650);
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			default :
				Beep(460,650);
				cout << "Ты проиграл сожалею тебе" << endl;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
		}
	}
	if(ver == 1) {
		switch(win) {
			case 1:
				Beep(540,650);
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 2:
				Beep(460,650);
				cout << "Ты проиграл сожалею тебе" << endl;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 3:
				Beep(540,650);
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 4:
				Beep(460,650);
				cout << "Ты проиграл сожалею тебе" << endl;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 5:
				Beep(540,650);
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			default :
				Beep(540,650);
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
		}
	}
	if(ver == 2) {
		switch(win) {
			case 1:
				Beep(540,650);
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 2:
				Beep(540,650);
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 3:
				Beep(460,650);
				cout << "Ты проиграл сожалею тебе" << endl;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 4:
				Beep(540,650);
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 5:
				Beep(540,650);
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			default :
				Beep(540,650);
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
		}
	}

	if(ver == 3) {
		switch(win) {
			case 1:
				Beep(540,650);
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 2:
				Beep(540,650);
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 3:
				Beep(540,650);
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 4:
				Beep(540,650);
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 5:
				Beep(540,650);
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			default :
				Beep(540,650);
				cout << "Поздравляю ты выиграл !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "Баланс : " << balance << endl;
				cout << "Следующий раунд....." << endl;
				fsave();
				Sleep(3500);
				cout << "\nЗагрузка(50%)\n." << endl;
				Sleep(500);
				cout << "\nЗагрузка(100%)\n." << endl;
				Sleep(500);
				start();
		}
	}
}



void start() {
	if(balance == 0) {
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
	if(stavka > balance) {
		cout << "\nОшибка ты не можешь поставить больше coins чем твой баланс !!!" << endl;
		cout << "\nЖди 3 секунды(До новой ставки) игра чистит душу \n.\n." << endl;
		Sleep(3000);
		start();
	}
	if(stavka == 0) {
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
	if(itg == 1) {
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
	fsave();
	cout << "\n\nЗагрузка 25%\n." << endl;
	Sleep(500);
	cout << "\nЗагрузка 50%\n." << endl;
	Sleep(500);
	cout << "\nЗагрузка 75%\n." << endl;
	Sleep(500);
	cout << "\nЗагрузка 100%\n." << endl;
	Sleep(600);
	nach();
	nach();
}


int main() {
	system("color fc");
	setlocale(0,"Russian");
	//начало
	Beep(920,500);
	fsmag();
	chek_bal();
	inus();
	cout << " Твой баланс : " << balance << endl;
	inmag();
	cout << "\n\n[1] Запустить игру\n" << endl;
	cout << "[2] INFO [F.A.Q]\n" << endl;
	cout << "[3] Магазин\n" << endl;
	cout << "[4] Получение баланса(начать новую игру)\n" << endl;
	cout << "[5] Сохранение баланса(сохранить игру)\n" << endl;
	cout << "[6] Ввести имя\n" << endl;
	cout << "[7] Прочие\n" << endl;
	cout << "[8] Настройки\n" << endl;
	cout << "[9] Выход из игры\n" << endl;
	cout << "(Введи числа от 1-7, выберая пункт меню)" << endl;
	cin >> menu;

	if(menu == 1212121212) {
		system("cls");
		balance = balance + 5000;
		cout << "Вы ввели чит-код с бонусом 5000 coins вы выйдите в меню через 3 сек." << endl;
		fsave();
		Sleep(3000);
		system("cls");
		Sleep(500);
		main();
	}

	switch(menu) {
		case 1:
			system("cls");
			cout << "Идёт загрузка .... " << endl;
			Sleep(400);
			system("cls");
			Sleep(600);
			zap();
			break;

		case 2:
			system("cls");
			cout << "Идёт загрузка .... " << endl;
			Sleep(400);
			system("cls");
			Sleep(600);
			info();
			break;

		case 3:
			system("cls");
			cout << "Идёт загрузка .... " << endl;
			Sleep(400);
			system("cls");
			Sleep(600);
			shop();
			break;

		case 4:
			system("cls");
			cout << "Идёт загрузка .... " << endl;
			Sleep(400);
			system("cls");
			Sleep(600);
			save2();
			break;

		case 5:
			system("cls");
			cout << "Идёт загрузка .... " << endl;
			Sleep(400);
			system("cls");
			Sleep(600);
			save1();
			break;
		case 6:
			system("cls");
			cout << "Идёт загрузка .... " << endl;
			Sleep(400);
			system("cls");
			Sleep(600);
			nuser();
			break;
		case 7:
			system("cls");
			cout << "Идёт загрузка .... " << endl;
			Sleep(400);
			system("cls");
			Sleep(600);
			cheats();
			break;
		case 8:
			system("cls");
			cout << "Идёт загрузка .... " << endl;
			Sleep(400);
			system("cls");
			Sleep(600);
			set();
			break;
		case 9:
			system("cls");
			exit(0);
			break;

		default:
			cout << "Ошибка!" << endl;
			main();
			break;
	}
	//не ниже этой строки
	_getch();
	return true;
}
