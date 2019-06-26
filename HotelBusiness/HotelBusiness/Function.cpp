#include "Classes.h"

HOME home;

////////////////////////////////////////////////////////////////�������\�������/////////////////////////////////////////////////////////////////// 

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
	cout << "��� ����� ���������� �������?" << endl;
	cout << "................................................." << endl;
	cin >> roomNumber;
}


string APPARTMENT::GetStatus()
{
	return (status) ? "��������" : "�����";//��������� ��������
}
void APPARTMENT::SetStatus()
{
	cout << "................................................." << endl;
	cout << "����� ������ ����� � �������?" << endl;
	cout << "0 - �����, 1 - ��������" << endl;
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

/////////////////////////////////////////////////////////////////////////////������/////////////////////////////////////////////////////////////////////////////////////////////////////////////


void HOME::AddRooms()
{
	int buffer;
	system("cls");
	cout << "................................................." << endl;
	cout << "1. ��������� ������" << endl;
	cout << "2. ������� � ������������ ������" << endl;
	cout << "................................................." << endl;
	cin >> buffer;

	if (buffer == 1)
	{
		HOUSE housing;//�������� �������� �������
		FLOOR floor;
		APPARTMENT room;
		
		floor.AddRoom(room);
		system("cls");
		cout << "................................................." << endl;
		cout << "������ ��������!" << endl;
		cout << "��������� �����:" << endl;
		cout << "................................................." << endl;
		housing.AddFloor(floor);
		cout << "���� ��������!" << endl;
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
		cout << "� ����� ������ �� ������ �������� �������" << endl;
		cout << "................................................." << endl;
		cin >> bufferhouse;
		system("cls");
		cout << "................................................." << endl;
		cout << "1. ��������� ����" << endl;
		cout << "2. �������� � ������������ ����" << endl;
		cout << "................................................." << endl;
		cin >> buffer;
		if (buffer == 1)
		{
			system("cls");
			FLOOR floor;
			APPARTMENT room;
			cout << "................................................." << endl;
			cout << "���� ��������!" << endl;
			cout << "��������� �������:" << endl;
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
			cout << "�� ����� ���� �� ������ �������� �������?" << endl;
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
//	cout << "����� ������� �� ������ ��������? " << endl;
//	cin >> buffer;
//
//	if (buffer > rooms.size() || buffer < 1)
//	{
//		cout << "����� ������� �� ���������� � �����!" << endl;
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
				cout <<"������:"<< i << "����:" << j << "�������:" << k << " : " << ((houses[i].floors[j]).rooms[k].GetStatus()) << endl;
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

///////////////////////////////////////////////////////////////////����� �� �����/////////////////////////////////////////////////////////////////// 

void HOTEL::printAdress()
{
	cout << "����� �����: " << GetAdress() << endl;
}
void HOTEL::printName()
{
	cout << "�������� �����: " << GetName() << endl;
}

/////////////////////////////////////////////////////////////////////������ � ����////////////////////////////////////////////////////////////////// 

void HOTEL::writeHotel()
{
	ofstream hotel("MyFile.txt");
	hotel << GetAdress() << endl;
	hotel << GetName() << endl;
}

/////////////////////////////////////////////////////////////////���������� � �����////////////////////////////////////////////////////////////////// 

void readFile()
{
	ifstream read("MyFile.txt");
	while (!read.eof())// ���� �� ���������� ����
	{
		string buffer;
		getline(read, buffer);
	}
	read.close();
}
