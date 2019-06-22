#include "pch.h"
#include "Menu.h"

int main()
{
	system("chcp 1251");
	system("mode con lines=35 cols=100");

	int vhod;
	string login = "art";
	string password = "123";
	string loginVvod;
	string passwordVvod;

	bool exit=false;
	while (!exit)
	{
		system("cls");
		cout << "................................................." << endl;
		cout << "1. Вход под Админ" << endl;
		cout << "2. Вход под Гость" << endl;
		cout << "3. Выход" << endl;
		cout << "................................................." << endl;
		cin >> vhod;

		switch (vhod)
		{
		case 1:
			system("cls");
			cout << "................................................." << endl;
			cout << "Логин: ";
			cin >> loginVvod;

			if (login != loginVvod)
			{
				cout << "................................................." << endl;
				cout << "Такой администратор не зарегистрирован!" << endl;
				Sleep(3000);
				break;
			}
			else
			{
				cout << "Пароль: ";
				cin >> passwordVvod;
				cout << "................................................." << endl;
				if (password != passwordVvod)
				{
					cout << "Неверный пароль!" << endl;
					Sleep(3000);
					break;
				}
				else
				{
					MenuAdmin();
				}
			}
		case 2:



		case 3:
			exit = true;
			break;
		default:
			cout << "Такого пункта не существует!" << endl;
			Sleep(3000);
			system("cls");
			break;
		}
	}
}
