#define _CRT_SECURE_NO_WARNINGS

#pragma once
#include <iostream>
#include <cstring>
#include "Ride.h"
using namespace std;

class Person {
private:
	int total;  // �� �ݾ�
	int count;  // �̿��� ���̱ⱸ ����
	char *name;  // ��ǥ�� �̸�
	int n;  // �ο�
	static int people;
public:
	Person(const char* _name, int num) : total(0), count(0)
	{
		int len = strlen(_name) + 1;
		name = new char[len];
		strcpy(name, _name);
		this->n = num;
		people += n;
	}
	explicit Person(const Person& p) : n(p.n), total(p.total), count(p.count)
	{
		name = new char[strlen(p.name) + 1];
		strcpy(this->name, p.name);
	}

	void RideViking(Viking& v) {
		cout << name << "��, ";
		if (v.GetSeat() <= 0) {
			v.SetSeat(20);
			cout << "���̱ⱸ�� �����Դϴ�. ���ð� " << v.GetTime() << "���Դϴ�." << endl;
		}
		else {
			v.SetSeat(n);
			if (v.GetSeat() < 0)
				cout << "���̱ⱸ ���� �ο� �ʰ��Դϴ�." << n + v.GetSeat() << "�� ž�� �����մϴ�." << endl;
			else 
			{
				cout << "�ο� " << n << "�� ����ŷ ž���ϼ̽��ϴ�." << endl;
				total += (v.GetCost()) * n;
				count++;
			}
		}
	}
	void RideBumper(BumperCar& b) {
		cout << name << "��, ";
		if (b.GetSeat() <= 0) {
			b.SetSeat(5);
			cout << "���̱ⱸ�� �����Դϴ�. ���ð� " << b.GetTime() << "���Դϴ�." << endl;
		}
		else {
			b.SetSeat(n);
			if (b.GetSeat() < 0)
				cout << "���̱ⱸ ���� �ο� �ʰ��Դϴ�." << n + b.GetSeat() << "�� ž�� �����մϴ�." << endl;
			else {
				cout << "�ο� " << n << "�� ����ī ž���ϼ̽��ϴ�." << endl;
				total += (b.GetCost()) * n;
				count++;
			}
		}
	}
	void RideT(T& t) {
		cout << name << "��, ";
		if (t.GetSeat() <= 0) {
			t.SetSeat(20);
			cout << "���̱ⱸ�� �����Դϴ�. ���ð� " << t.GetTime() << "���Դϴ�." << endl;
		}
		else {
			t.SetSeat(n);
			if (t.GetSeat() < 0)
				cout << "���̱ⱸ ���� �ο� �ʰ��Դϴ�." << n + t.GetSeat() << "�� ž�� �����մϴ�." << endl;
			else {
				cout << "�ο� " << n << "�� Ƽ �ͽ������� ž���ϼ̽��ϴ�." << endl;
				total += (t.GetCost()) * n;
				count++;
			}
		}
	}
	void RideHurricane(Hurricane& h) {
		cout << name << "��, ";
		if (h.GetSeat() <= 0) {
			h.SetSeat(6);
			cout << "���̱ⱸ�� �����Դϴ�. ���ð� " << h.GetTime() << "���Դϴ�." << endl;
		}
		else {
			h.SetSeat(n);
			if (h.GetSeat() < 0)
				cout << "���̱ⱸ ���� �ο� �ʰ��Դϴ�." << n + h.GetSeat() << "�� ž�� �����մϴ�." << endl;
			else {
				cout << "�ο� " << n << "�� �㸮���� ž���ϼ̽��ϴ�." << endl;
				total += (h.GetCost()) * n;
				count++;
			}
		}
	}
	void RideAmazon(Amazon& a) {
		cout << name << "��, ";
		if (a.GetSeat() <= 0) {
			a.SetSeat(8);
			cout << "���̱ⱸ�� �����Դϴ�. ���ð� " << a.GetTime() << "���Դϴ�." << endl;
		}
		else {
			a.SetSeat(n);
			if (a.GetSeat() < 0)
				cout << "���̱ⱸ ���� �ο� �ʰ��Դϴ�." << n + a.GetSeat() << "�� ž�� �����մϴ�." << endl;
			else {
				cout << "�ο� " << n << "�� �Ƹ��� �ͽ������� ž���ϼ̽��ϴ�." << endl;
				total += (a.GetCost()) * n;
				count++;
			}
		}
	}
	void ShowData(void) const
	{
		cout << name << "��, ";
		cout << "�� " << count << "���� ���̱ⱸ�� �̿��ϼ̽��ϴ�." << endl;
		cout << "���� �ݾ��� " << total << "���Դϴ�." << endl;
	}
	void EverlandData(void) const
	{
		cout << endl;
		cout << "���� ������� �������带 �̿��� ���� ���� " << people << "���Դϴ�." << endl << endl;
		people = 0;
	}
};

int Person::people = 0;