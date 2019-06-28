#include "Classes.h"

////////////////////////////////////////////////////////////////Гетторы\сетторы/////////////////////////////////////////////////////////////////// 

string HOTEL::GetAdress()
{
	return adress;
}
string HOTEL::GetName()
{
	return name;
}


string APPARTMENT::GetRoomNumber()
{
	return roomNumber;
}
void APPARTMENT::SetRoomNumber()
{
	cout << "................................................." << endl;
	cout << "Как будет называться комната?" << endl;
	cin >> roomNumber;
}

int APPARTMENT::GetStatus1()
{
	return (status) ? 1 : 0;//тернарная операция
}

string APPARTMENT::GetStatus()
{
	return (status) ? "Помощение свободное" : "Помощение занято";//тернарная операция
}
void APPARTMENT::SetStatus()
{
	cout << "................................................." << endl;
	cout << "Какой статус будет у комнаты?" << endl;
	cout << "0 - занят, 1 - свободен" << endl;
	cin >> status;
}

void FLOOR::AddRoom(APPARTMENT& room)
{
	rooms.push_back(room);
}

void HOUSE::AddFloor(FLOOR& floor)
{
	floors.push_back(floor);
}

void HOME::AddHousing(HOUSE& housing)
{
	houses.push_back(housing);
}

void HOME::DelHousing()
{
	houses.pop_back();
}

void HOUSE::DelFloor()
{
	floors.pop_back();
}

void FLOOR::DelRoom()
{
	rooms.pop_back();
}

/////////////////////////////////////////////////////////////////////////////МЕТОДЫ/////////////////////////////////////////////////////////////////////////////////////////////////////////////


void HOME::Add()
{
	int buffer;
	system("cls");
	cout << "................................................." << endl;
	cout << "1. Построить корпус" << endl;
	cout << "2. Добавть в существующий корпус" << endl;
	cout << "................................................." << endl;
	cin >> buffer;

	if (buffer == 1)
	{
		HOUSE *housing = new HOUSE;//создание динамических переменных типов классов
		FLOOR *floor = new FLOOR;
		APPARTMENT *room = new APPARTMENT;
		
		system("cls");
		cout << "................................................." << endl;
		cout << "Новый корпус построен!" << endl;
		cout << "................................................." << endl;
		cout << "Постройка этажа:" << endl;
		cout << "Новый этаж построен!" << endl;
		room->SetRoomNumber();
		room->SetStatus();
		floor->AddRoom(*room);
		housing->AddFloor(*floor);
		this->AddHousing(*housing);
		cout << "Новая комната построена!" << endl;
		cout << "................................................." << endl;
	}

	if (buffer == 2)
	{
		int bufferhouse;
		int buffer;
		system("cls");
		cout << "................................................." << endl;
		cout << "В какой корпус вы хотите дабавить комнату" << endl;
		cout << "................................................." << endl;
		cin >> bufferhouse;
		if (bufferhouse > this->houses.size() || bufferhouse < 1)
		{
			cout << "................................................." << endl;
			cout << "Такого корпуса не существует в отеле!" << endl;
			return;
		}
		else
		{
			cout << "................................................." << endl;
			cout << "1. Построить этаж" << endl;
			cout << "2. Добавить в существующий этаж" << endl;
			cout << "................................................." << endl;
			cin >> buffer;
		}
		if (buffer == 1)
		{
			system("cls");
			FLOOR *floor = new FLOOR;
			APPARTMENT *room = new APPARTMENT;
			cout << "................................................." << endl;
			cout << "Новый этаж построен!" << endl;
			cout << "Постройка комнаты:" << endl;
			room->SetRoomNumber();
			room->SetStatus();
			floor->AddRoom(*room);
			this->houses[bufferhouse-1].AddFloor(*floor);
			cout << "Новая комната построена!" << endl;
			cout << "................................................." << endl;
		}
		if (buffer == 2)
		{
			system("cls");
			APPARTMENT *room = new APPARTMENT;
			int bufferfloor;
			cout << "................................................." << endl;
			cout << "На какой этаж вы хотите дабавить комнату?" << endl;
			cout << "................................................." << endl;
			cin >> bufferfloor;
			if (bufferfloor > this->houses[bufferhouse - 1].floors.size() || bufferfloor < 1)
			{
				cout << "................................................." << endl;
				cout << "Такого этажа не существует в корпусе!" << endl;
				return;
			}
			else
			{
				room->SetRoomNumber();
				room->SetStatus();
				this->houses[bufferhouse - 1].floors[bufferfloor - 1].AddRoom(*room);
				cout << "Новая комната построена!" << endl;
				cout << "................................................." << endl;
			}
		}
	}
}

void HOME::Del()
{
	int choice;

	cout << "1. Снести комнату" << endl;
	cout << "2. Снести этаж" << endl;
	cout << "3. Снести корпус" << endl;
	cin >> choice;

	if (choice == 1)
	{
		int bufferhouse;
		int bufferfloor;
		int bufferroom;
		cout << "................................................." << endl;
		cout << "Из какого корпуса вы хотите снести комнату?" << endl;
		cout << "................................................." << endl;
		cin >> bufferhouse;
		if (bufferhouse > this->houses.size() || bufferhouse < 1)
		{
			cout << "................................................." << endl;
			cout << "Такого корпуса не существует в отеле!" << endl;
			return;
		}
		else
		{
			cout << "................................................." << endl;
			cout << "Из какого этажа вы хотете снести комнату?" << endl;
			cout << "................................................." << endl;
			cin >> bufferfloor;
			if (bufferfloor > this->houses[bufferhouse - 1].floors.size() || bufferfloor < 1)
			{
				cout << "................................................." << endl;
				cout << "Такого этажа не существует в корпусе!" << endl;
				return;
			}
			else
			{
				cout << "................................................." << endl;
				cout << "Какую комнату вы хотете снести?" << endl;
				cout << "................................................." << endl;
				cin >> bufferroom;
				if (bufferroom > this->houses[bufferhouse - 1].floors[bufferfloor - 1].rooms.size() || bufferroom < 1)
				{
					cout << "................................................." << endl;
					cout << "Такой комнаты не существует на этаже!" << endl;
					return;
				}
				else
				{
					this->houses[bufferhouse - 1].floors[bufferfloor - 1].DelRoom();
					cout << "Комната снесена!" << endl;
				}
			}
		}
	}

	if (choice == 2)
	{
		int bufferhouse;
		int bufferfloor;
		cout << "................................................." << endl;
		cout << "Из какого корпуса вы хотите снести этаж?" << endl;
		cout << "................................................." << endl;
		cin >> bufferhouse;
		if (bufferhouse > this->houses.size() || bufferhouse < 1)
		{
			cout << "................................................." << endl;
			cout << "Такого корпуса не существует в отеле!" << endl;
			return;
		}
		else
		{
			this->houses[bufferhouse - 1].DelFloor();
			cout << "Этаж снесен!" << endl;
		}
	}

	if (choice == 3)
	{
		int bufferhouse;
		cout << "................................................." << endl;
		cout << "Какой корпус вы хотите снести?" << endl;
		cout << "................................................." << endl;
		cin >> bufferhouse;
		if (bufferhouse > this->houses.size() || bufferhouse < 1)
		{
			cout << "................................................." << endl;
			cout << "Такого корпуса не существует в отеле!" << endl;
			return;
		}
		else
		{
			this->DelHousing();
			cout << "Корпус снесен!" << endl;
		}
	}
	
}

void HOME::edit()
{
	int bufferhouse;
	int bufferfloor;
	int bufferroom;
	cout << "................................................." << endl;
	cout << "Комнату какого корпуса вы хотите изменить? " << endl;
	cin >> bufferhouse;

	if (bufferhouse > this->houses.size() || bufferhouse < 1)
	{
		cout << "................................................." << endl;
		cout << "Такого корпуса не существует в отеле!" << endl;
		return;
	}
	else
	{
		cout << "................................................." << endl;
		cout << "Комнату какого этажа вы хотите изменить? " << endl;
		cin >> bufferfloor;

		if (bufferfloor > this->houses[bufferhouse-1].floors.size() || bufferfloor<1)
		{
			cout << "................................................." << endl;
			cout << "Такого этажа не существует в корпусе!" << endl;
			return;
		}
		else
		{
			cout << "................................................." << endl;
			cout << "Какую комнату вы хотите изменить?" << endl;
			cin >> bufferroom;

			if (bufferroom > this->houses[bufferhouse - 1].floors[bufferfloor-1].rooms.size() || bufferroom < 1)
			{
				cout << "................................................." << endl;
				cout << "Такой комнаты не существует на этаже!" << endl;
				return;
			}
			else
			{
				this->houses[bufferhouse - 1].floors[bufferfloor - 1].rooms[bufferroom-1].SetRoomNumber();
				this->houses[bufferhouse - 1].floors[bufferfloor - 1].rooms[bufferroom - 1].SetStatus();
			}
		}
	}
}

void HOME::printVector()
{
	for (int i = 0; i < houses.size(); i++)
		for (int j = 0; j < houses[i].floors.size(); j++)
			for (int k = 0; k < houses[i].floors[j].rooms.size(); k++)
			{
				cout <<"\nКорпус:"<< i+1 << "\nЭтаж:" << j+1 << "\nКомнатa:" << k+1 << "\nНазванипе комнаты:" << houses[i].floors[j].rooms[k].GetRoomNumber() <<"\nСтатус помещения:" << houses[i].floors[j].rooms[k].GetStatus() <<  endl;
			}
}

void HOME::writeVec()
{
	ofstream vector("MyFile.txt");
	for (int i = 0; i < houses.size(); i++)
		for (int j = 0; j < houses[i].floors.size(); j++)
			for (int k = 0; k < houses[i].floors[j].rooms.size(); k++)
			{
				vector <<"{\n"<< i + 1 <<"\n"<< j + 1 << "\n" << k + 1 << "\n" << houses[i].floors[j].rooms[k].GetRoomNumber() << "\n" << houses[i].floors[j].rooms[k].GetStatus1() <<"\n}"<< endl;
			}
}

///////////////////////////////////////////////////////////////////Вывод на экран/////////////////////////////////////////////////////////////////// 

void HOTEL::printAdress()
{
	cout << "Адрес отеля: " << GetAdress() << endl;
}
void HOTEL::printName()
{
	cout << "Название отеля: " << GetName() << endl;
}

/////////////////////////////////////////////////////////////////Считывание с файла////////////////////////////////////////////////////////////////// 

ifstream& operator>>(ifstream& read, APPARTMENT& obj)
{
	getline(read, obj.roomNumber);
	read >> obj;
	read >> obj.status;
	return read;
}

APPARTMENT & APPARTMENT::operator=(APPARTMENT & obj)
{
	roomNumber = obj.GetRoomNumber();
	status = obj.GetStatus1();
	return *this;
}

void HOME::readFile()
{
	ifstream read("MyFile.txt");
	if (!read.is_open())
	{
		cout << "Ошибка открытия файла!";
		return;
	}
	else
	{
		char buffer;
		while (!read.eof())
		{
			read >> buffer;
			if (buffer == '{')
			{
				int buffHouse;
				int buffFloor;
				int buffRoom;
				int buff;
				string str;
				read >> buffHouse;
				if (this->houses.size() < buffHouse)
				{
					HOUSE *housing = new HOUSE;
					FLOOR *floor = new FLOOR;
					APPARTMENT *room = new APPARTMENT;
					read >> buffFloor;
					read >> buffRoom;
					read >> str;
					read >> buff;
					room->roomNumber = str;
					room->status = buff;
					floor->AddRoom(*room);
					housing->AddFloor(*floor);
					this->AddHousing(*housing);
				}
				else
				{
					read >> buffFloor;
					if (this->houses[buffHouse - 1].floors.size() < buffFloor)
					{
						FLOOR *floor = new FLOOR;
						APPARTMENT *room = new APPARTMENT;
						read >> buffRoom;
						read >> str;
						read >> buff;
						room->roomNumber = str;
						room->status = buff;
						floor->AddRoom(*room);
						houses[buffHouse - 1].AddFloor(*floor);
					}
					else
					{
						read >> buffRoom;
						if (this->houses[buffHouse - 1].floors[buffFloor - 1].rooms.size() < buffRoom)
						{
							APPARTMENT *room = new APPARTMENT;
							read >> str;
							read >> buff;
							room->roomNumber = str;
							room->status = buff;
							houses[buffHouse - 1].floors[buffFloor - 1].AddRoom(*room);
						}
					}
				}
			}
		}
	}
	read.close();
}
