#include "pch.h"
#include "Vector.h"

void addRoom()
{
	int buffer1;
	int buffer2;
	int buffer3;
	cout << "................................................." << endl;
	cout << "В какой корпус вы хотите добавить комнату? " << endl;
	cin >> buffer1;

	if ()
	{
		cout << "Такого корпуса не существует в отеле!" << endl;
		return;
	}
	else
	{
		cout << "................................................." << endl;
		cout << "На какой этаж вы хотите добавить комнату? " << endl;
		cin >> buffer2;
		if ()
		{
			cout << "Такого этажа не существует в отеле!" << endl;
			return;
		}
		else
		{
			rooms.SetAddAmountRooms();
			rooms.SetRoomNumber();
			rooms.SetStatus();
			floors.room.push_back(rooms);
		}
	}
}


void addFloor()
{
	floors.SetFloorNumber;
	floors.room.push_back(floors);
}


void addHouse()
{
	housing.SetHousingNumber();
	housing.floor.push_back(housing);
}


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
//
//void writeVec()
//{
//	ofstream fout("MyFile.txt", ios::app);
//
//	fout << "Список номеров в отеле: "<< endl;
//	for (int i = 0; i < vecR.size(); i++)
//	{
//		fout << "Номер: " << vecR[i].GetRoomNumber();
//		fout << endl;
//	}
//	fout<< "\n**********************************************************************"<<endl;
//}

