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

//==========[��� ���� ��������]==========//
using namespace std;
//==========[����������]=================//
int stavka;
int win;
int maxrand;
int yes;
int menu;
int ver;
int yesshop;
int balance;
bool cheat = false;
//==========[�������]====================//
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
	cout << "\t\t\t\t[���������]" << endl;
	cout << "�� ������ �������� ���� ���� ������ ��� ���� ����" << endl;
	cout << "\n[0]��������" << endl;
	cout << "\n[1]׸���� ��� - ����� �����" << endl;
	cout << "\n[2]������� ��� - ����� �����" << endl;
	cout << "\n[3]����� ��� - ������� �����" << endl;
	cout << "\n[4]������ ��� - ����� �����" << endl;
	cout << "\n[5]׸���� ��� - ������� �����" << endl;
	cin >> vib;
	switch(vib)
	{
		case 0:
			system("color fc");
			cout << "�� ������ ���������� � ���� ����� 3 �������" << endl;
			Sleep(3000);
			system ("cls");
			main();
 		break;
		case 1:
			system("color 08");
			cout << "�� ������ ���������� � ���� ����� 3 �������" << endl;
			Sleep(3000);
			system ("cls");
			main();
 		break;
 		
 		case 2:
			system("color 4f");
			cout << "�� ������ ���������� � ���� ����� 3 �������" << endl;
			Sleep(3000);
			system ("cls");
			main();
 		break;
 		
 		case 3:
			system("color 8b");
			cout << "�� ������ ���������� � ���� ����� 3 �������" << endl;
			Sleep(3000);
			system ("cls");
			main();
 		break;
 		
 		case 4:
			system("color 2f");
			cout << "�� ������ ���������� � ���� ����� 3 �������" << endl;
			Sleep(3000);
			system ("cls");
			main();
 		break;
 		
 		case 5:
			system("color 05");
			cout << "�� ������ ���������� � ���� ����� 3 �������" << endl;
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
	cout << "����� ���� ���������� ��� : ";
	cin >>a;
	if(a == "ppp")
	{
		balance = balance + 10000000;
		cout << "�� �����������!" << endl;
		Sleep(1000);
		fsave();
		system("cls");
		cout << "��� �������� .... " << endl;
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
			cout << "������ �� ��� ������� �������!" << endl;
			Sleep(2000);
			system("cls");
			main();
		}
		else
		{
			balance = balance + 1200;
			cout << "�� �������� ������� � ������� 1200 coins!" << endl;
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
			cout << "������ �� ��� ������� �������!" << endl;
			Sleep(2000);
			system("cls");
			main();
		}
		else
		{
			balance = balance + 5000;
			cout << "�� �������� ������� � ������� 5000 coins!" << endl;
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
			cout << "������ �� ��� ������� �������!" << endl;
			Sleep(2000);
			system("cls");
			main();
		}
		else
		{
			balance = balance + 10000;
			cout << "�� �������� ������� � ������� 10000 coins!" << endl;
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
		
		cout << "���������� ��� �� ������!" << endl;
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

	cout << " ��������� ����������� �� ������ " << bver << "%" << endl;
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
	cout << " ������������ ���� : " << namess << "!" << endl;

}

void nuser() {
	char names[40];
	cout << "����� ��� ��� ��� � ���� ���������� (�� �������� � ��� ��������!!!)" << endl;
	cin >> names;
	cout << " ���������� ���� " << names << " ������� ������� ��� ������������� � ����" << endl;
	ofstream name;
	name.open("0x000404.bin");
	name << names << endl;
	name.close();
	Sleep(1000);
	system("cls");
	Sleep(500);
	cout << "������ ���� ������������ � ���� ����� 3 �������." << endl;
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
	cout << "��� ���������� �������� ...." << endl;
	Sleep(500);
	ofstream save;
	save.open("0x000412.bin",ios_base::out);
	save << balance << endl;
	save.close();
	fsmag();
	cout << "������� �������. �� ������ ���������������� � ���� ����� 3 ���." << endl;
	Sleep(3000);
	system("cls");
	main();
}

void save2() {
	cout << "�������� ����� �������...\n" << endl;
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
	cout << "������� ������ ������! �� ������ �������������� � ���� ����� 3 ���." << endl;
	Sleep(3000);
	system("cls");
	main();
}

void shop() {
	cout << " ��� ������� � ������� �� ������� ������ ������ � ����� ����.\n" << endl;
	cout << " ������ ����� ����� ���� ���� � � ������� ����� ����������� ��������� ������.\n" << endl;
	cout << " ���� � ���� �� ����� � ������� coins ������� ������� ����� ����� �� ��� �� ������!\n" << endl;
	cout << " ������� �������?(1-�� , 0 - ����� � ����)\n" << endl;
	cin >> yesshop;
	if(yesshop == 1) {
		system("cls");
		Sleep (1000);
		cout << "[����� 1]����������� ������ 10% (��������� 7000 coins) " << endl;
		cout << "[����� 2]����������� ������ 50% (��������� 150000 coins)" << endl;
		cout << "[����� 3]����������� ������ 100% (��������� 1000000 coins)" << endl;
		cout << "����� ����� ������ ������� ������ ������..." << endl;
		cin >> ver;
		switch(ver) {
			case 1:
				if(balance < 7000) {
					cout << "������ � ���� ���� ������� �����" << endl;
				} else {
					balance = balance - 7000;
					cout << "�� ����� ����������� ������ 10%" << endl;
					ver = 1;
					cout << "������� ����������� ����� 3 ������� " << endl;
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
					cout << "������ � ���� ���� ������� �����" << endl;
				} else {
					balance = balance - 150000;
					cout << "�� ����� ����������� ������ 50%" << endl;
					ver = 2;
					cout << "������� ����������� ����� 3 ������� " << endl;
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
					cout << "������ � ���� ���� ������� �����" << endl;
				} else {
					balance = balance - 1000000;
					cout << "�� ����� ����������� ������ 100%" << endl;
					ver = 3;
					cout << "������� ����������� ����� 3 ������� " << endl;
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
		cout << "��� �������� .... " << endl;
		Sleep(400);
		system("cls");
		Sleep(600);
		main();
	}
}
void info() {
	int ivih;
	cout << "����������� ����, ��� ���� <*CASINO*>\n" << endl;
	cout << "���� ���� ����� ��� �������.(���������� ��� ����� ������,�� ��������� �� ����)\n" << endl;
	cout << "����� �� ���������� ���� � ������ ���� ����� ������ ������ �������\n" << endl;
	cout << "���������� ������� � ������� �� ������ ������ ����������� ������  � �.�\n" << endl;
	cout << "���� �� ���������� ��� ��� ������ �������� ����! vk.com/timmy_gabani\n" << endl;
	cout << "� ��������� SNIFF.inc\n" << endl;
	cout << "���� ����������� ��� �� ������� �� ������ ������ ���� ���������� ���������� ��� => vk.com/casinogamecpp\n" << endl;
	cout << "������� 1 ����� ����� � ����" << endl;
	cin >> ivih;
	if(ivih == 1) {
		system("cls");
		Sleep(50);
		cout << "��� �������� .... " << endl;
		Sleep(400);
		system("cls");
		Sleep(600);
		main();
	} else {
		cout << "���� ���������!..." << endl;
	}
}

void zap() {

	cout << "���� �����������...." << endl;
	Sleep(1000);
	cout << "\n\n�������� 25%\n." << endl;
	Sleep(500);
	cout << "\n�������� 50%\n." << endl;
	Sleep(500);
	cout << "\n�������� 75%\n." << endl;
	Sleep(500);
	cout << "\n�������� 100%\n." << endl;
	Sleep(500);
	cout << " ���� ���������!"<< endl;
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
				cout << "���������� �� ������� !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 2:
				Beep(460,650);
				cout << "�� �������� ������� ����" << endl;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 3:
				Beep(540,650);
				cout << "���������� �� ������� !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 4:
				Beep(460,650);
				cout << "�� �������� ������� ����" << endl;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 5:
				Beep(540,650);
				cout << "���������� �� ������� !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			default :
				Beep(460,650);
				cout << "�� �������� ������� ����" << endl;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
		}
	}
	if(ver == 1) {
		switch(win) {
			case 1:
				Beep(540,650);
				cout << "���������� �� ������� !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 2:
				Beep(460,650);
				cout << "�� �������� ������� ����" << endl;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 3:
				Beep(540,650);
				cout << "���������� �� ������� !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 4:
				Beep(460,650);
				cout << "�� �������� ������� ����" << endl;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 5:
				Beep(540,650);
				cout << "���������� �� ������� !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			default :
				Beep(540,650);
				cout << "���������� �� ������� !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
		}
	}
	if(ver == 2) {
		switch(win) {
			case 1:
				Beep(540,650);
				cout << "���������� �� ������� !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 2:
				Beep(540,650);
				cout << "���������� �� ������� !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 3:
				Beep(460,650);
				cout << "�� �������� ������� ����" << endl;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 4:
				Beep(540,650);
				cout << "���������� �� ������� !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 5:
				Beep(540,650);
				cout << "���������� �� ������� !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			default :
				Beep(540,650);
				cout << "���������� �� ������� !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
		}
	}

	if(ver == 3) {
		switch(win) {
			case 1:
				Beep(540,650);
				cout << "���������� �� ������� !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 2:
				Beep(540,650);
				cout << "���������� �� ������� !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 3:
				Beep(540,650);
				cout << "���������� �� ������� !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 4:
				Beep(540,650);
				cout << "���������� �� ������� !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			case 5:
				Beep(540,650);
				cout << "���������� �� ������� !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
				break;
			default :
				Beep(540,650);
				cout << "���������� �� ������� !!!\n." << endl;
				stavka = stavka*mnz;
				balance = stavka + balance;
				cout << "������ : " << balance << endl;
				cout << "��������� �����....." << endl;
				fsave();
				Sleep(3500);
				cout << "\n��������(50%)\n." << endl;
				Sleep(500);
				cout << "\n��������(100%)\n." << endl;
				Sleep(500);
				start();
		}
	}
}



void start() {
	if(balance == 0) {
		cout << "���, �� �� �������� ���� ������ 0! � ��������� ��� ���� ������! (������� ������ ����)" << endl;
		Sleep(900000);
	}
	char mgz[256];
	stavka = 0;
	cout << "����� ������ �� ��� ����������\n" << endl;
	cout << "����� ���� ������ : " << endl;
	cin >> stavka;
	cout << "����� � ����? (1-��, ����� ��� ������� - ���������� ����)" << endl;
	cin >> mgz;
	int itg = atoi(mgz);
	if(stavka > balance) {
		cout << "\n������ �� �� ������ ��������� ������ coins ��� ���� ������ !!!" << endl;
		cout << "\n��� 3 �������(�� ����� ������) ���� ������ ���� \n.\n." << endl;
		Sleep(3000);
		start();
	}
	if(stavka == 0) {
		cout << "������ �� ����� ���� 0!\n\n" << endl;
		Sleep(100);
		cout << "\n��������(50%)\n." << endl;
		Sleep(500);
		cout << "\n��������(100%)\n." << endl;
		Sleep(500);
		cout << " ��� 3 ������� �� ����� ������!" << endl;
		Sleep(3000);
		start();
	}
	if(itg == 1) {
		system("cls");
		Sleep(100);
		cout << "����������� ����� � ����..." << endl;
		cout << "" << endl;
		cout << "��� �������� .... " << endl;
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
	cout << "\n��������....\n" << endl;
	Sleep(500);
	cout << "������ ����� : " << stavka << endl;
	balance = balance-stavka;
	cout << "��������� ������ ����� : " << balance << endl;
	fsave();
	cout << "\n\n�������� 25%\n." << endl;
	Sleep(500);
	cout << "\n�������� 50%\n." << endl;
	Sleep(500);
	cout << "\n�������� 75%\n." << endl;
	Sleep(500);
	cout << "\n�������� 100%\n." << endl;
	Sleep(600);
	nach();
	nach();
}


int main() {
	system("color fc");
	setlocale(0,"Russian");
	//������
	Beep(920,500);
	fsmag();
	chek_bal();
	inus();
	cout << " ���� ������ : " << balance << endl;
	inmag();
	cout << "\n\n[1] ��������� ����\n" << endl;
	cout << "[2] INFO [F.A.Q]\n" << endl;
	cout << "[3] �������\n" << endl;
	cout << "[4] ��������� �������(������ ����� ����)\n" << endl;
	cout << "[5] ���������� �������(��������� ����)\n" << endl;
	cout << "[6] ������ ���\n" << endl;
	cout << "[7] ������\n" << endl;
	cout << "[8] ���������\n" << endl;
	cout << "[9] ����� �� ����\n" << endl;
	cout << "(����� ����� �� 1-7, ������� ����� ����)" << endl;
	cin >> menu;

	if(menu == 1212121212) {
		system("cls");
		balance = balance + 5000;
		cout << "�� ����� ���-��� � ������� 5000 coins �� ������� � ���� ����� 3 ���." << endl;
		fsave();
		Sleep(3000);
		system("cls");
		Sleep(500);
		main();
	}

	switch(menu) {
		case 1:
			system("cls");
			cout << "��� �������� .... " << endl;
			Sleep(400);
			system("cls");
			Sleep(600);
			zap();
			break;

		case 2:
			system("cls");
			cout << "��� �������� .... " << endl;
			Sleep(400);
			system("cls");
			Sleep(600);
			info();
			break;

		case 3:
			system("cls");
			cout << "��� �������� .... " << endl;
			Sleep(400);
			system("cls");
			Sleep(600);
			shop();
			break;

		case 4:
			system("cls");
			cout << "��� �������� .... " << endl;
			Sleep(400);
			system("cls");
			Sleep(600);
			save2();
			break;

		case 5:
			system("cls");
			cout << "��� �������� .... " << endl;
			Sleep(400);
			system("cls");
			Sleep(600);
			save1();
			break;
		case 6:
			system("cls");
			cout << "��� �������� .... " << endl;
			Sleep(400);
			system("cls");
			Sleep(600);
			nuser();
			break;
		case 7:
			system("cls");
			cout << "��� �������� .... " << endl;
			Sleep(400);
			system("cls");
			Sleep(600);
			cheats();
			break;
		case 8:
			system("cls");
			cout << "��� �������� .... " << endl;
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
			cout << "������!" << endl;
			main();
			break;
	}
	//�� ���� ���� ������
	_getch();
	return true;
}
