#include "Menu.h"

int main()
{
	system("chcp 1251");
	system("mode con lines=40 cols=100");

	int list;
	int vhod;
	string login = "art";
	string password = "123";
	string loginVvod;
	string passwordVvod;

	bool exit = false;
	while (!exit)
	{
		/////////////////////////////////////////////////////////////////////////////////////�����������//////////////////////////////////////////////////////////// 
		system("cls");
		cout << "................................................." << endl;
		cout << "1. ���� ��� �����" << endl;
		cout << "2. ���� ��� ������" << endl;
		cout << "3. �������� �������" << endl;
		cout << "4. �������" << endl;
		cout << "5. �����" << endl;
		cout << "................................................." << endl;
		cin >> vhod;
		switch (vhod)
		{
		case 1:
		{
			system("cls");
			cout << "................................................." << endl;
			cout << "�����: ";
			cin >> loginVvod;

			if (login != loginVvod)
			{
				cout << "................................................." << endl;
				cout << "����� ������������� �� ���������������!" << endl;
				Sleep(2000);
				break;
			}
			else
			{
				cout << "������: ";
				cin >> passwordVvod;
				cout << "................................................." << endl;
				if (password != passwordVvod)
				{
					cout << "�������� ������!" << endl;
					Sleep(2000);
					break;
				}
				else
				{
					MenuAdmin();
				}
			}
			break;
		}
		case 2:
			MenuGyest();
			break;
			/////////////////////////////////////////////////////////////////////////////////�������� �������//////////////////////////////////////////////////////////// 
		case 3:
		{
			system("cls");
			cout << "................................................." << endl;
			cout << "1. DEFAULT" << endl;
			cout << "2. ������ ���, ������� �����" << endl;
			cout << "3. ׸���� ���, ������-������ �����" << endl;
			cout << "4. ������� ���, ����� �����" << endl;
			cout << "5. ������� ���, ������� �����" << endl;
			cout << "................................................." << endl;
			cin >> list;
			if (list == 1)
			{
				system("color 07");
			}
			if (list == 2)
			{
				system("color 24");
			}
			if (list == 3)
			{
				system("color 0A");
			}
			if (list == 4)
			{
				system("color 56");
			}
			if (list == 5)
			{
				system("color 35");
			}
			break;
		}
		case 4:
		{
			bool a = false;
			system("cls");
			cout << "................................................." << endl;
			cout << "�����������: ������ ���� ������������." << endl;
			cout << "����, �����, 2019�." << endl;
			cout << "................................................." << endl;
			cout << "������� 0 ��� ������: ";
			cin >> a;
			a = true;
			if (a == true)
			{
				break;
			}
		}
		case 5:
		{
			exit = true;
			break;
		}
		default:
			cout << "������ ������ �� ����������!" << endl;
			Sleep(2000);
			system("cls");
			break;
		}
	}
}