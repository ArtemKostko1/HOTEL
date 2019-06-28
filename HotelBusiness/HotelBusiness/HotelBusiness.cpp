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
		/////////////////////////////////////////////////////////////////////////////////////Авторизация//////////////////////////////////////////////////////////// 
		system("cls");
		cout << "................................................." << endl;
		cout << "1. Вход под Админ" << endl;
		cout << "2. Вход под Клиент" << endl;
		cout << "3. Цветовая палитра" << endl;
		cout << "4. Справка" << endl;
		cout << "5. Выход" << endl;
		cout << "................................................." << endl;
		cin >> vhod;
		switch (vhod)
		{
		case 1:
		{
			system("cls");
			cout << "................................................." << endl;
			cout << "Логин: ";
			cin >> loginVvod;

			if (login != loginVvod)
			{
				cout << "................................................." << endl;
				cout << "Такой администратор не зарегистрирован!" << endl;
				Sleep(2000);
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
			/////////////////////////////////////////////////////////////////////////////////Цветовая палитра//////////////////////////////////////////////////////////// 
		case 3:
		{
			system("cls");
			cout << "................................................." << endl;
			cout << "1. DEFAULT" << endl;
			cout << "2. Зелёный фон, красный текст" << endl;
			cout << "3. Чёрный фон, светло-зелёный текст" << endl;
			cout << "4. Лиловый фон, жёлтый текст" << endl;
			cout << "5. Голубой фон, лиловый текст" << endl;
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
			cout << "Разработчик: Костко Артём Владимирович." << endl;
			cout << "МГКЭ, Минск, 2019г." << endl;
			cout << "................................................." << endl;
			cout << "Введите 0 для выхода: ";
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
			cout << "Такого пункта не существует!" << endl;
			Sleep(2000);
			system("cls");
			break;
		}
	}
}