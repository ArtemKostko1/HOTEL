#include "pch.h"
#include "Classes.h"
#include "vector.h"

////////////////////////////////////////////////////////////////Гетторы\сетторы/////////////////////////////////////////////////////////////////// 

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
//string APPARTMENT::GetStatus()
//{
//	return status == false ? "Свободен" : "Занят";
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

////////////////////////////////////////////////////////////////Вывод на экран/////////////////////////////////////////////////////////////////// 

void HOME::printAddress()
{
	cout << "Адрес отеля: " << GetAddress() << endl;
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
//void APPARTMENT::printRooms()
//{
//	cout << "Количество комнат: " << GetAmountRooms() << endl;
//}


//////////////////////////////////////////////////////////////////Запись в файл////////////////////////////////////////////////////////////////// 

//void HOME::write1()
//{
//	if (fout.is_open())
//	{
//		cout << "Файл успешно открыт!" << endl;
//		fout << address;
//	}
//	else
//	{
//		cout << "Ошибка открытия файла!" << endl;
//	}
//}
//
//void HOTEL::write2()
//{
//	if (fout.is_open())
//	{
//		cout << "Файл успешно открыт!" << endl;
//		fout << name;
//	}
//	else
//	{
//		cout << "Ошибка открытия файла!" << endl;
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
