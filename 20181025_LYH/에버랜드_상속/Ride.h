#ifndef __RIDE_H__
#define __RIDE_H__
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;

class Ride
{
private:
	int cost;
	int R_SEAT;  // �¼� ����
	int seat;  // �ܿ���
	int limit;
	char* rides;
public:
	Ride(int _cost, int _R_SEAT, int _limit, const char* _rides) 
		: cost(_cost), R_SEAT(_R_SEAT), seat(_R_SEAT), limit(_limit)
	{
		int len = strlen(_rides) + 1;
		rides = new char[len];
		strcpy(rides, _rides);
	}

	// Ű üũ 
	bool H_Check(Person& p) 
	{
		for (int i = 0; i < p.GetNum(); i++) 
		{
			if (p.GetHeight()[i] < limit)
				return 0;
		}
		return 1;
	}

	// �ܿ��� Ȯ�� -> Ż �� �ִ��� -> �ο��� ž���ϰ� �� �޾��ֱ�.
	bool S_Check(Person& p)
	{
		if (p.GetNum() <= seat)
			return 1;
		else
			return 0;
	}
	// ���̱ⱸ�� �ѹ� ���ư� (�̿ϼ�)
	void Start(void)
	{
		cout << rides << " ����Ǿ����ϴ�." << endl;
		seat = R_SEAT;
	}

	// ž�� & ����
	void Riding(Person& p)
	{
		if (S_Check(p) && H_Check(p))
		{
			seat -= p.GetNum();

			p.AddTotal(cost);
			p.AddCount();
			cout << p.GetName() << "��, " << rides << " ž���ϼ̽��ϴ�." << endl;

			if (seat == 0)
			{
				Start();
				return;
			}
		}
		else
		{
			if (S_Check(p) == 0)
				cout << p.GetName() << "��, �ο��� �ʰ��� ž���Ͻ� �� �����ϴ�." << endl;
			if (H_Check(p) == 0)
				cout << "Ű ���ѿ� �ɷ� ž���Ͻ� �� �����ϴ�." << endl;
		}
	}
};

class Viking : public Ride
{
public:
	Viking() : Ride(5000, 20, 140,"����ŷ")
	{}
};

class BumperCar : public Ride
{
public:
	BumperCar() : Ride(2000, 6, 110, "����ī")
	{}
};

class T : public Ride
{
public:
	T() : Ride(5000, 20, 150, "Ƽ �ͽ�������")
	{}
};

class Hurricane : public Ride
{
public:
	Hurricane() : Ride(5000, 6, 130, "�㸮����")
	{}
};

class Amazon : public Ride
{
public:
	Amazon() : Ride(5000, 8, 110, "�Ƹ��� �ͽ�������")
	{}
};

#endif