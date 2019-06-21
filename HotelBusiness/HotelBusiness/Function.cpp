#include "pch.h"
#include "Classes.h"

////////////////////////////////////////////////////////////////Гетторы\сетторы/////////////////////////////////////////////////////////////////// 

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
	cout << "Сколько вы хотетие добавить комнат?" << endl;
	cout << "................................................." << endl;
	cin >> amountRooms;
}


int APPARTMENT::GetRoomNumber()
{
	return roomNumber;
}
void APPARTMENT::SetRoomNumber()
{
	cout << "Каким будет номер комнаты?" << endl;
	cin >> roomNumber;
}


int APPARTMENT::GetDelAmountRooms()
{
	return amountRooms;
}
void APPARTMENT::SetDelAmountRooms()
{
	cout << "Сколько вы хотетие удалить комнат?" << endl;
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
	return status == false ? "Свободен" : "Занят";
}
void APPARTMENT::SetStatus(bool status)
{
	//cout << "Какой статус будет у номера?";
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

////////////////////////////////////////////////////////////////Вывод на экран/////////////////////////////////////////////////////////////////// 

void HOME::printAdress()
{
	cout << "Адрес отеля: " << GetAdress() << endl;
}

void HOTEL::printName()
{
	cout << "Название отеля: " << GetName() << endl;
}

//void APPARTMENT::printFloor()
//{
//	cout << "Этажей в корпусе: " << GetFloor() << endl;;
//}
//

//////////////////////////////////////////////////////////////////Запись в файл////////////////////////////////////////////////////////////////// 

void HOME::write1()
{
	ofstream fout("MyFile.txt", ios::app);
	fout << "Адрес отеля: " << GetAdress() << "\n**********************************************************************" << endl;
}

void HOTEL::write2()
{
	ofstream fout("MyFile.txt", ios::app);
	fout << "Название отеля: " << GetName() << "\n**********************************************************************" << endl;
}