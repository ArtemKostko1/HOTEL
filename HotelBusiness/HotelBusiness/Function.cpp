#include "Classes.h"

HOME home;

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
	cout << "................................................." << endl;
	cin >> roomNumber;
}


string APPARTMENT::GetStatus()
{
	return (status) ? "Свободен" : "Занят";//тернарная операция
}
void APPARTMENT::SetStatus()
{
	cout << "................................................." << endl;
	cout << "Какой статус будет у комнаты?" << endl;
	cout << "0 - занят, 1 - свободен" << endl;
	cout << "................................................." << endl;
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

/////////////////////////////////////////////////////////////////////////////МЕТОДЫ/////////////////////////////////////////////////////////////////////////////////////////////////////////////


void HOME::AddRooms()
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
		HOUSE housing;//создание объектов классов
		FLOOR floor;
		APPARTMENT room;
		
		floor.AddRoom(room);
		system("cls");
		cout << "................................................." << endl;
		cout << "Корпус построен!" << endl;
		cout << "Постройка этажа:" << endl;
		cout << "................................................." << endl;
		housing.AddFloor(floor);
		cout << "Этаж построен!" << endl;
		room.SetRoomNumber();
		room.SetStatus();
		home.AddHousing(housing);
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
		system("cls");
		cout << "................................................." << endl;
		cout << "1. Построить этаж" << endl;
		cout << "2. Добавить в существующий этаж" << endl;
		cout << "................................................." << endl;
		cin >> buffer;
		if (buffer == 1)
		{
			system("cls");
			FLOOR floor;
			APPARTMENT room;
			cout << "................................................." << endl;
			cout << "Этаж построен!" << endl;
			cout << "Постройка комнаты:" << endl;
			room.SetRoomNumber();
			room.SetStatus();
			floor.AddRoom(room);
			home.houses[bufferhouse].AddFloor(floor);
		}
		if (buffer == 2)
		{
			system("cls");
			APPARTMENT room;
			int bufferfloor;
			cout << "................................................." << endl;
			cout << "На какой этаж вы хотите дабавить комнату?" << endl;
			cout << "................................................." << endl;
			cin >> bufferfloor;

			room.SetRoomNumber();
			room.SetStatus();

			home.houses[bufferhouse].floors[bufferfloor].AddRoom(room);
		}
	}
}
//
//void edit()
//{
//	int buffer;
//	cout << "................................................." << endl;
//	cout << "Какую комнату вы хотите изменить? " << endl;
//	cin >> buffer;
//
//	if (buffer > rooms.size() || buffer < 1)
//	{
//		cout << "Такой комнаты не существует в отеле!" << endl;
//		return;
//	}
//	
//	vecR[buffer - 1].SetRoomNumber();
//}
//
void HOME::printVector()
{
	for (int i = 0; i < houses.size(); i++)
		for (int j = 0; j < houses[i].floors.size(); j++)
			for (int k = 0; k < ((houses[i]).floors[j]).rooms.size(); k++) {
				cout <<"Корпус:"<< i << "Этаж:" << j << "Комнаты:" << k << " : " << ((houses[i].floors[j]).rooms[k].GetStatus()) << endl;
			}
}

//void HOME::writeVec()
//{
//	ofstream vector("MyFile.txt");
//	for (int i = 0; i < houses.size(); i++)
//		for (int j = 0; j < houses[i].floors.size(); j++)
//			for (int k = 0; k < ((houses[i]).floors[j]).rooms.size(); k++) {
//				cout << i << "\n" << j << "\n" << k << " : " << ((houses[i].floors[j]).rooms[k].GetStatus()) << endl;
//	}
//}

///////////////////////////////////////////////////////////////////Вывод на экран/////////////////////////////////////////////////////////////////// 

void HOTEL::printAdress()
{
	cout << "Адрес отеля: " << GetAdress() << endl;
}
void HOTEL::printName()
{
	cout << "Название отеля: " << GetName() << endl;
}

/////////////////////////////////////////////////////////////////////Запись в файл////////////////////////////////////////////////////////////////// 

void HOTEL::writeHotel()
{
	ofstream hotel("MyFile.txt");
	hotel << GetAdress() << endl;
	hotel << GetName() << endl;
}

/////////////////////////////////////////////////////////////////Считывание с файла////////////////////////////////////////////////////////////////// 

void readFile()
{
	ifstream read("MyFile.txt");
	while (!read.eof())// Пока не закончился файл
	{
		string buffer;
		getline(read, buffer);
	}
	read.close();
}
