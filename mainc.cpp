#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <dos.h>
#include <ctime>
//==========[��� ���� ��������]==========//
using namespace std;
//==========[����������]=================//
int stavka;
int win;
int maxrand;
int yes;
int menu;

int balance = 5000;
//==========[�������]====================//
void start();
void nach();
void info();
void zap();
//=======================================//

void info()
{
	cout << "����������� ����, ��� ���� <*CASINO*>\n" << endl;
	cout << "���� ���� ���� ����������� � ��� ����� �� �������� ������ �� 0 � ������� ��� ����� ������ �����!\n" << endl;
	cout << "���� �������� ������ ����� 5000 coins\n" << endl;
	cout << "����� ���� � ����� ���� � ������� ������� ���!\n.\n.\n." << endl;
}

void zap()
{
		cout << "���� �����������...." << endl;
		Sleep(1000);
		cout << "\n\n�������� 25%\n." << endl;
		Sleep(500);
		cout << "\n�������� 50%\n." << endl;
		Sleep(500);
		cout << "\n�������� 75%\n." << endl;
		Sleep(500);
		cout << "\n��������100%\n." << endl;
		Sleep(500);
		cout << " ���� ���������!"<< endl;
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
			cout << "���������� �� ������� !!!\n." << endl;
			stavka = stavka*mnz;
			balance = stavka + balance;
			cout << "������ : " << balance << endl;
			cout << "��������� �����....." << endl;
			Sleep(3500);
			cout << "\n��������(50%)\n." << endl;
			Sleep(500);
			cout << "\n��������(100%)\n." << endl;
			Sleep(500);
			start();
		break;
		case 2:
			cout << "�� �������� ������� ����" << endl;
			cout << "������ : " << balance << endl; 
			cout << "��������� �����....." << endl;
			Sleep(3500);
			cout << "\n��������(50%)\n." << endl;
			Sleep(500);
			cout << "\n��������(100%)\n." << endl;
			Sleep(500);
			start();
		break;	
		case 3:
			cout << "���������� �� ������� !!!\n." << endl;
			stavka = stavka*mnz;
			balance = stavka + balance;
			cout << "������ : " << balance << endl;
			cout << "��������� �����....." << endl;
			Sleep(3500);
			cout << "\n��������(50%)\n." << endl;
			Sleep(500);
			cout << "\n��������(100%)\n." << endl;
			Sleep(500);
			start();
		break;
		case 4:
			cout << "�� �������� ������� ����" << endl;
			cout << "������ : " << balance << endl; 
			cout << "��������� �����....." << endl;
			Sleep(3500);
			cout << "\n��������(50%)\n." << endl;
			Sleep(500);
			cout << "\n��������(100%)\n." << endl;
			Sleep(500);
			start();
		break;	
		case 5:
			cout << "���������� �� ������� !!!\n." << endl;
			stavka = stavka*mnz;
			balance = stavka + balance;
			cout << "������ : " << balance << endl;
			cout << "��������� �����....." << endl;
			Sleep(3500);
			cout << "\n��������(50%)\n." << endl;
			Sleep(500);
			cout << "\n��������(100%)\n." << endl;
			Sleep(500);
			start();
		break;	
		default :
			cout << "�� �������� ������� ����" << endl;
			cout << "������ : " << balance << endl; 
			cout << "��������� �����....." << endl;
			Sleep(3500);
			cout << "\n��������(50%)\n." << endl;
			Sleep(500);
			cout << "\n��������(100%)\n." << endl;
			Sleep(500);
			start();
	}
}



void start()
{
	if(balance == 0)
	{
		cout << "���, �� �� �������� ���� ������ 0! � ��������� ��� ���� ������! (������� ������ ����)" << endl;
		Sleep(900000);
	}
	stavka = 0;
	cout << "����� ������ �� ��� ����������\n" << endl;
	cout << "����� ���� ������ : " << endl;
	cin >> stavka;
	if(stavka > balance)
	{
		cout << "\n������ �� �� ������ ��������� ������ coins ��� ���� ������ !!!" << endl;
		cout << "\n��� 3 �������(�� ����� ������) ���� ������ ���� \n.\n." << endl;
		Sleep(3000);
		start();
	}
	if(stavka == 0)
	{
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
	Sleep(500);
	cout << "\n��������....\n" << endl;
	Sleep(500);
	cout << "������ ����� : " << stavka << endl;
	balance = balance-stavka;
	cout << "��������� ������ ����� : " << balance << endl;
	cout << "\n\n�������� 25%\n." << endl;
	Sleep(500);
	cout << "\n�������� 50%\n." << endl;
	Sleep(500);
	cout << "\n�������� 75%\n." << endl;
	Sleep(500);
	cout << "\n��������100%\n." << endl;
	Sleep(500);
	nach();
}


int main() 
{
	system("color fc");
	setlocale(0,"Russian");
	//������
	cout << "[1] ��������� ����\n" << endl;
	cout << "[2] INFO[F.A.Q]\n" << endl;
	cout << "[3]\n" << endl;
	cout << "[4]\n" << endl;
	cout << "[5]����� �� ����\n" << endl;
	cout << "(����� ����� �� 1-4, ������� ����� ����)" << endl;
	cin >> menu;


	switch(menu)
	{
		case 1:
			cout << "��� �������� .... " << endl;
			Sleep(400);
			system("cls");
			Sleep(600);
			zap();
		break;
		
		case 2:
			cout << "��� �������� .... " << endl;
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
	//�� ���� ���� ������
	_getch();
	return true;
}
