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
int balance = 5000;
//==========[�������]====================//
int main();
void start();
void nach();
void info();
void zap();
void shop();
void save();
//=======================================//

/*void save()
{
	ofstream akk("memory512.bin");
	akk << balance;
}*/

void shop()
{
	cout << " ��� ������� � ������� �� ������� ������ ������ � ����� ����.\n" << endl;
	cout << " ������ ����� ����� ���� ���� � � ������� ����� ����������� ��������� ������.\n" << endl;
	cout << " ���� � ���� �� ����� � ������� coins ������� ������� ����� ����� �� ��� �� ������!\n" << endl;
	cout << " ������� �������?(1-�� , 0 - ����� � ����)\n" << endl;
	cin >> yesshop;
	if(yesshop == 1)
	{
		system("cls");
		Sleep (1000);
		cout << "[����� 1]����������� ������ 10% (��������� 7000 coins) " << endl;
		cout << "[����� 2]����������� ������ 50% (��������� 150000 coins)" << endl;
		cout << "[����� 3]����������� ������ 100% (��������� 1000000 coins)" << endl;
		cout << "����� ����� ������ ������� ������ ������..." << endl;
		cin >> ver;
		switch(ver)
		{
			case 1:
				if(balance < 7000)
				{
					cout << "������ � ���� ���� ������� �����" << endl;
				}
				else
				{
					balance = balance - 7000;
					cout << "�� ����� ����������� ������ 10%" << endl;
					ver = 1;
					cout << "������� ����������� ����� 3 ������� " << endl;
					Sleep(3000);
					system("cls");
					Sleep(500);
					main();
				}
			break;
			case 2:
				if(balance < 150000)
				{
					cout << "������ � ���� ���� ������� �����" << endl;
				}
				else
				{
					balance = balance - 150000;
					cout << "�� ����� ����������� ������ 50%" << endl;
					ver = 2;
					cout << "������� ����������� ����� 3 ������� " << endl;
					Sleep(3000);
					system("cls");
					Sleep(500);
					main();
				}
			break;
			case 3:
				if(balance < 1000000)
				{
					cout << "������ � ���� ���� ������� �����" << endl;
				}
				else
				{
					balance = balance - 1000000;
					cout << "�� ����� ����������� ������ 100%" << endl;
					ver = 3;
					cout << "������� ����������� ����� 3 ������� " << endl;
					Sleep(3000);
					system("cls");
					Sleep(500);
					main();
				}
			break;

		}
	
	
	}
	else
	{
		cout << "��� �������� .... " << endl;
		Sleep(400);
		system("cls");
		Sleep(600);
		main();
	}
}
void info()
{
	int ivih;
	cout << "����������� ����, ��� ���� <*CASINO*>\n" << endl;
	cout << "���� ���� ����� ��� �������.(���������� ��� ����� ������,�� ��������� �� ����)\n" << endl;
	cout << "����� �� ���������� ���� � ������ ���� ����� ������ ������ �������\n" << endl;
	cout << "���������� ������� � ������� �� ������ ������ ����������� ������  � �.�\n" << endl;
	cout << "���� �� ���������� ��� ��� ������ �������� ����! vk.com/timmy_gabani\n" << endl;
	cout << "� ��������� SNIFF.inc\n" << endl;
	cout << "���� ����������� ��� �� ������� �� ������ ������ ���� ���������� ���������� ��� => vk.com/timmy_gabani\n" << endl;
	cout << "������� 1 ����� ����� � ����" << endl;
	cin >> ivih;
	if(ivih == 1)
	{
		system("cls");
		Sleep(50);
		cout << "��� �������� .... " << endl;
		Sleep(400);
		system("cls");
		Sleep(600);
		main();
	}
	else
	{
		cout << "���� ���������!..." << endl;	
	}
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
	cout << "\n�������� 100%\n." << endl;
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
	if(ver == 0)
	{
		switch(win)
		{
			case 1:
				Beep(540,650);
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
				Beep(460,650);
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
				Beep(540,650);
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
				Beep(460,650);
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
				Beep(540,650);
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
				Beep(460,650);
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
	if(ver == 1)
	{
		switch(win)
		{
			case 1:
				Beep(540,650);
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
				Beep(460,650);
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
				Beep(540,650);
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
				Beep(460,650);
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
				Beep(540,650);
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
				Beep(540,650);
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
		}
	}
	if(ver == 2)
	{
		switch(win)
		{
			case 1:
				Beep(540,650);
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
				Beep(540,650);
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
			case 3:
				Beep(460,650);
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
			case 4:
				Beep(540,650);
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
			case 5:
				Beep(540,650);
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
				Beep(540,650);
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
		}
	}
	
	if(ver == 3)
	{
		switch(win)
		{
			case 1:
				Beep(540,650);
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
				Beep(540,650);
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
			case 3:
				Beep(540,650);
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
				Beep(540,650);
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
			case 5:
				Beep(540,650);
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
				Beep(540,650);
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
		}
	}
}



void start()
{
	if(balance == 0)
	{
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
	if(itg == 1)
	{
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


int main() 
{
	system("color fc");
	setlocale(0,"Russian");
	//������
	Beep(1000,100);
	cout << " ������������ ���� ...\n" << endl;
	cout << " ���� ������ : " << balance << endl;
	cout << "\n\n[1] ��������� ����\n" << endl;
	cout << "[2] INFO [F.A.Q]\n" << endl;
	cout << "[3] �������\n" << endl;
	cout << "[4] ��������� ������(����������� ����� ������ �� ����!)\n" << endl;
	cout << "[5] ����� �� ����\n" << endl;
	cout << "(����� ����� �� 1-5, ������� ����� ����)" << endl;
	cin >> menu;

	if(menu == 1972)
	{
		system("cls");
		balance = balance + 5000;
		cout << "�� ����� ���-��� � ������� 5000 coins �� ������� � ���� ����� 3 ���." << endl;
		Sleep(3000);
		system("cls");
		Sleep(500);
		main();
	}

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
			cout << "��� �������� .... " << endl;
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
			cout << "������!" << endl;
			exit(0);
		break;
	}
	//�� ���� ���� ������
	_getch();
	return true;
}
