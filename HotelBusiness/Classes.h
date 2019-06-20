#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

//ofstream fout("MyFile.txt", ofstream::app);

class HOME
{
private:
	string address;//адресс отеля
public:

	string GetAddress();

	HOME()
	{
		address = "Страна Болгария, город Албена, вторая курортная линия";
	}

	void printAddress();
	/*void write1();*/

};

class HOTEL
{
private:
	string name;//название отеля
public:

	string GetName();

	HOTEL()
	{
		name = "Орхидея";
	}

	void printName();
	//void write2();

};

class APPARTMENT
{
protected:
	int roomNumber;//номер комнаты
	int amountRooms;//колличество комнат
	int floor;//этаж
	bool status;//статус
public:

	////////////////////////////////////////////////////////////////Гетторы\сетторы/////////////////////////////////////////////////////////////////// 

	int GetAddAmountRooms();
	void SetAddAmountRooms();

	int GetRoomNumber();
	void SetRoomNumber();

	int GetDelAmountRooms();
	void SetDelAmountRooms();

	//void write3();

	//int GetFloor();
	//void SetFloor(int floor);

	//string GetStatus();
	//void SetStatus(bool status);

	////////////////////////////////////////////////////////////////Методы/////////////////////////////////////////////////////////////////// 

	//void printFloor();
	//void delRoom(int);
	//void printRooms();

};

class HOMEAPPARTMENT:public APPARTMENT
{
private:
	int entranceNumber;//номер подъезда
public:

	////////////////////////////////////////////////////////////////Гетторы\сетторы/////////////////////////////////////////////////////////////////// 

	//int GetEntranceNumber();
	//void SetEntranceNumber(int entranceNumber);

};

class HOTELAPPARTMENT:public APPARTMENT
{
private:
	int housingNumber;//номер корпуса
public:

	////////////////////////////////////////////////////////////////Гетторы\сетторы/////////////////////////////////////////////////////////////////// 

	//int GetHousingNumber();
	//void SetHousingNumber(int housingNumber);
};
