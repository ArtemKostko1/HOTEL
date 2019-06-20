#include "pch.h"
#include "vector.h"

vector<HOTELAPPARTMENT>vecR;
HOTELAPPARTMENT room;

void addRoom()
{
	room.SetRoomNumber();
	vecR.push_back(room);
}

void delRoom()
{
	HOTELAPPARTMENT room;
	vecR.pop_back();
}

void printVector()
{
	for (int i = 0; i < vecR.size(); i++)
	{
		cout << vecR[i].GetRoomNumber() << endl;
	}
}

void edit()
{
	vector<HOTELAPPARTMENT>::iterator it = vecR.begin();

	int buffer;
	cout << "................................................." << endl;
	cout << "Какую комнату вы хотите изменить? " << endl;
	cin >> buffer;

	advance(it, buffer);
	room.SetRoomNumber();
	
}
