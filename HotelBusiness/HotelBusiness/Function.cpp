#include "pch.h"
#include "Classes.h"

////////////////////////////////////////////////////////////////�������\�������/////////////////////////////////////////////////////////////////// 

string HOME::GetAdress()
{
	return adress;
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
string APPARTMENT::GetStatus()
{
	return status == false ? "��������" : "�����";
}
void APPARTMENT::SetStatus(bool status)
{
	//cout << "����� ������ ����� � ������?";
	this->status = status;
}


//int HOTELAPPARTMENT::GetHousingNumber()
//{
//	return housingNumber;
//}
//void HOTELAPPARTMENT::SetHousingNumber(int housingNumber)
//{
//	this->housingNumber = housingNumber;
//}

////////////////////////////////////////////////////////////////����� �� �����/////////////////////////////////////////////////////////////////// 

void HOME::printAdress()
{
	cout << "����� �����: " << GetAdress() << endl;
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

//////////////////////////////////////////////////////////////////������ � ����////////////////////////////////////////////////////////////////// 

void HOME::write1()
{
	ofstream fout("MyFile.txt", ios::app);
	fout << "����� �����: " << GetAdress() << "\n**********************************************************************" << endl;
}

void HOTEL::write2()
{
	ofstream fout("MyFile.txt", ios::app);
	fout << "�������� �����: " << GetName() << "\n**********************************************************************" << endl;
}