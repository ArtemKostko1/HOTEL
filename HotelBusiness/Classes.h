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
	string address;//������ �����
public:

	string GetAddress();

	HOME()
	{
		address = "������ ��������, ����� ������, ������ ��������� �����";
	}

	void printAddress();
	/*void write1();*/

};

class HOTEL
{
private:
	string name;//�������� �����
public:

	string GetName();

	HOTEL()
	{
		name = "�������";
	}

	void printName();
	//void write2();

};

class APPARTMENT
{
protected:
	int roomNumber;//����� �������
	int amountRooms;//����������� ������
	int floor;//����
	bool status;//������
public:

	////////////////////////////////////////////////////////////////�������\�������/////////////////////////////////////////////////////////////////// 

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

	////////////////////////////////////////////////////////////////������/////////////////////////////////////////////////////////////////// 

	//void printFloor();
	//void delRoom(int);
	//void printRooms();

};

class HOMEAPPARTMENT:public APPARTMENT
{
private:
	int entranceNumber;//����� ��������
public:

	////////////////////////////////////////////////////////////////�������\�������/////////////////////////////////////////////////////////////////// 

	//int GetEntranceNumber();
	//void SetEntranceNumber(int entranceNumber);

};

class HOTELAPPARTMENT:public APPARTMENT
{
private:
	int housingNumber;//����� �������
public:

	////////////////////////////////////////////////////////////////�������\�������/////////////////////////////////////////////////////////////////// 

	//int GetHousingNumber();
	//void SetHousingNumber(int housingNumber);
};
