#include "pch.h"
#include "Classes.h"
#include "vector.h"

////////////////////////////////////////////////////////////////�������\�������/////////////////////////////////////////////////////////////////// 

string HOME::GetAddress()
{
	return address;
}


string HOTEL::GetName()
{
	return name;
}


int APPARTMENT::GetAddAmountRooms()
{
	return amountRooms;
}
void APPARTMENT::SetAddAmountRooms()
{
	cout << "������� �� ������� �������� ������?" << endl;
	cout << "................................................." << endl;
	cin >> amountRooms;
}


int APPARTMENT::GetRoomNumber()
{
	return roomNumber;
}
void APPARTMENT::SetRoomNumber()
{
	cout << "����� ����� ����� �������?" << endl;
	cin >> roomNumber;
}


int APPARTMENT::GetDelAmountRooms()
{
	return amountRooms;
}
void APPARTMENT::SetDelAmountRooms()
{
	cout << "������� �� ������� ������� ������?" << endl;
	cout << "................................................." << endl;
	cin >> amountRooms;
}


//int APPARTMENT::GetFloor()
//{
//	return floor;
//}
//void APPARTMENT::SetFloor(int floor)
//{
//	this->floor = floor;
//}
//
//
//string APPARTMENT::GetStatus()
//{
//	return status == false ? "��������" : "�����";
//}
//void APPARTMENT::SetStatus(bool status)
//{
//	this->status = status;
//}


//int HOTELAPPARTMENT::GetHousingNumber()
//{
//	return housingNumber;
//}
//void HOTELAPPARTMENT::SetHousingNumber(int housingNumber)
//{
//	this->housingNumber = housingNumber;
//}

////////////////////////////////////////////////////////////////����� �� �����/////////////////////////////////////////////////////////////////// 

void HOME::printAddress()
{
	cout << "����� �����: " << GetAddress() << endl;
}

void HOTEL::printName()
{
	cout << "�������� �����: " << GetName() << endl;
}

//void APPARTMENT::printFloor()
//{
//	cout << "������ � �������: " << GetFloor() << endl;;
//}
//
//void APPARTMENT::printRooms()
//{
//	cout << "���������� ������: " << GetAmountRooms() << endl;
//}


//////////////////////////////////////////////////////////////////������ � ����////////////////////////////////////////////////////////////////// 

//void HOME::write1()
//{
//	if (fout.is_open())
//	{
//		cout << "���� ������� ������!" << endl;
//		fout << address;
//	}
//	else
//	{
//		cout << "������ �������� �����!" << endl;
//	}
//}
//
//void HOTEL::write2()
//{
//	if (fout.is_open())
//	{
//		cout << "���� ������� ������!" << endl;
//		fout << name;
//	}
//	else
//	{
//		cout << "������ �������� �����!" << endl;
//	}
//}

//void APPARTMENT::write3()
//{
//	ofstream fout("MyFile.txt", ofstream::app);
//
//	for (APPARTMENT &n : vecR)
//	{
//		fout << n;
//	}
//}
//ofstream& operator <<(ofstream& fout, APPARTMENT& buff)
//{
//	fout << buff.GetRoomNumber()<< endl;
//	return fout;
//}
