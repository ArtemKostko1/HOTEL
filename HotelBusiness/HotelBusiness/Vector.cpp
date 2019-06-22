#include "pch.h"
#include "Vector.h"

vector<HOTELAPPARTMENT>vecR;
HOTELAPPARTMENT room;

void addRoom()
{
	room.SetRoomNumber();
	vecR.push_back(room);
}

void delRoom()
{
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
	int buffer;
	cout << "................................................." << endl;
	cout << "Какую комнату вы хотите изменить? " << endl;
	cin >> buffer;

	if (buffer > vecR.size() || buffer < 1)
	{
		cout << "Такой комнаты не существует в отеле!" << endl;
		return;
	}
	vecR[buffer - 1].SetRoomNumber();
}


void writeVec()
{
	ofstream fout("MyFile.txt", ios::app);

	fout << "Список номеров в отеле: "<< endl;
	for (int i = 0; i < vecR.size(); i++)
	{
		fout << "Номер: " << vecR[i].GetRoomNumber();
		fout << endl;
	}
	fout<< "\n**********************************************************************"<<endl;
}

