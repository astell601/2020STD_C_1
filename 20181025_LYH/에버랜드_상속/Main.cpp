#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Ride.h"
#include "Person.h"
using namespace std;

int main(void) {

	Viking v;

	BumperCar b;
	T t;
	Hurricane h;
	Amazon a;

	Person p1("������", 2);
	Person p2("�����", 4);
	Person p3("�ڳ���", 8);
	Person p4("�ٶ���", 10);
	Person p5("�䳢", 6);

	v.Riding(p3);
	v.Riding(p4);
	v.Riding(p5);  // ž��x ���
	v.Riding(p1);

	b.Riding(p5);

	t.Riding(p2);
	t.Riding(p4);
	t.Riding(p5);

	h.Riding(p1);
	h.Riding(p2);

	a.Riding(p3);

	p1.ShowData();
	p2.ShowData();
	p3.ShowData();
	p4.ShowData();
	p5.ShowData();

	return 0;
}