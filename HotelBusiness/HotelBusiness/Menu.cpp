#include "pch.h"
#include "Menu.h"

int menu;
int list1;
int list2;
int list3;
int list4;
HOME ad;
HOTEL nam;
APPARTMENT house;

void MenuAdmin()
{
	bool exit = false;
	while (!exit)
	{

////////////////////////////////////////////////////////////////������� ����� ����/////////////////////////////////////////////////////////////// 

		system("cls");
		cout << "................................................." << endl;
		cout << "1. ��������� ������������ ���������" << endl;
		cout << "2. �������� ������������ ���������" << endl;
		cout << "3. �������� �������" << endl;
		cout << "4. �����" << endl;
		cout << "................................................." << endl;
		cin >> menu;

		switch (menu)
		{

/////////////////////////////////////////////////////////////////////������ case///////////////////////////////////////////////////////////////// 

		case 1:
			system("cls");
			cout << "................................................." << endl;
			cout << "1. ���������/��������/�������������� ��������" << endl;
			cout << "2. ���������� �������� � ����" << endl;
			cout << "................................................." << endl;
			cin >> list1;

//////////////////////////////////////////////////////����������\��������\�������������� ������////////////////////////////////////////////////////////// 

			if (list1 == 1)
			{
				system("cls");
				cout << "................................................." << endl;
				cout << "1. �������� �������" << endl;
				cout << "2. ������� �������" << endl;
				cout << "3. ������������� �������" << endl;
				cout << "................................................." << endl;
				cin >> list4;
				/////////////////////////////////
				if (list4 == 1)
				{
					system("cls");
					house.SetAddAmountRooms();
					for (int i = 0; i < house.GetAddAmountRooms(); i++)
					{
						addRoom();
					}
				}
				/////////////////////////////////
				if (list4 == 2)
				{
					system("cls");
					house.SetDelAmountRooms();
					for (int i = 0; i < house.GetDelAmountRooms(); i++)
					{
						delRoom();
					}
				}
				/////////////////////////////////
				if (list4 == 3)
				{
					system("cls");
					edit();
				}
			}
////////////////////////////////////////////////////////////////////������ � ����//////////////////////////////////////////////////////////////// 
			bool a;
			if (list1 == 2)
			{
				ad.write1();
				nam.write2();
				writeVec();
				a = false;
			}
			/////////////////////////////////
			cout << "������� 0 ��� ������: ";
			cin >> a;
			a = true;
			if (a == true)
			{
				break;
			}

/////////////////////////////////////////////////////////////////////������ case/////////////////////////////////////////////////////////////////

		case 2:
			bool e;
				system("cls");
				ad.printAdress();
				nam.printName();
				cout << "������ ������� � �����:" << endl;
				printVector();
				e = false;
			/////////////////////////////////
			cout << "������� 0 ��� ������: ";
			cin >> e;
			e = true;
			if (e == true)
			{
				break;
			}

		case 3:

			system("cls");
			cout << "................................................." << endl;
			cout << "1. DEFAULT" << endl;
			cout << "2. ������ ���, ������� �����" << endl;
			cout << "3. ׸���� ���, ������-������ �����" << endl;
			cout << "4. ������� ���, ����� �����" << endl;
			cout << "5. ������� ���, ������� �����" << endl;
			cout << "................................................." << endl;
			cin >> list2;
/////////////////////////////////////////////////////////////////////�������� �������//////////////////////////////////////////////////////////// 
			if (list2 == 1)
			{
				system("color 07");
			}
			if (list2 == 2)
			{
				system("color 24");
			}
			if (list2 == 3)
			{
				system("color 0A");
			}
			if (list2 == 4)
			{
				system("color 56");
			}
			if (list2 == 5)
			{
				system("color 35");
			}

			break;

		case 4:

			exit = true;
			break;

		default:
			cout << "������ ������ �� ����������!" << endl;
			Sleep(3000);
			system("cls");
			break;
		}
	}
}


void MenuGyest()
{
	cout << "................................................." << endl;
	cout << "�� ������������ ��� � ����� ����������� ��������� \n\t\t'�������'" << endl;
	cout << "................................................." << endl;
	cout << "�������� ����� �� ������:\n" << endl;
	cout << "1. �������� �������� �� �����" << endl;
	cout << "................................................." << endl;
	cin >> list3;

	switch (list3)
	{

		

	default:
		break;
	}
}