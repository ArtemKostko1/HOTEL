#include "pch.h"
#include "vector.h"

vector<APPARTMENT>vecR;

void addRoom()
{
	HOTELAPPARTMENT room;
	room.SetRoomNumber();
	vecR.push_back(room);
}

//void delRoom()
//{
//	HOTELAPPARTMENT room;
//	room.SetRoomNumber();
//	vecR.pop_back(room);
//}

void printVector()
{
	for (int i = 0; i < vecR.size(); i++)
	{
		cout << vecR[i].GetRoomNumber() << endl;
	}
}

void edit()
{

}
