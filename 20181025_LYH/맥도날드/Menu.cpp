#include <iostream>
#include <cstring>
#include "Menu.h"
using namespace std;

// ���� Ŭ���� ������� �ʱ�ȭ
Burger::Burger(const char* name, int n) 
{
	strcpy_s(BurgerName, name);
	num = n;
	BurgerPrice = 4000;
}

// ���� �Ǹ� ���
int Burger::SaleBurger() 
{
	int cost = num * BurgerPrice;
	return cost;
}

// ���� �ֹ� ���
void Burger::ShowData() const
{
	cout << BurgerName << "���� " << num << "���� �ֹ��ϼ̽��ϴ�." << endl;
}

// ����Ƣ��
Fries::Fries(int n) 
{
	num = n;
	FriesPrice = 2000;
}
int Fries::SaleFries() 
{
	int cost = num * FriesPrice;
	return cost;
}
void Fries::ShowData() const 
{
	cout << "����Ƣ�� " << num << "���� ��Ű�̽��ϴ�." << endl;
}

// ����
Drink::Drink(int n) 
{
	num = n;
	DrinkPrice = 1000;
}
int Drink::SaleDrink() 
{
	int cost = num * DrinkPrice;
	return cost;
}
void Drink::ShowData() const 
{
	cout << "���� " << num << "���� ��Ű�̽��ϴ�." << endl;
}

// ���̽�ũ��
Icecream::Icecream(int n) 
{
	num = n;
	IcecreamPrice = 1500;
}
int Icecream::SaleIcecream() 
{
	int cost = num * IcecreamPrice;
	return cost;
}
void Icecream::ShowData() const 
{
	cout << "���̽�ũ�� " << num << "���� ��Ű�̽��ϴ�." << endl;
}

// ��Ʈ
Set::Set(const char* name) : b(name, 1), f(1), d(1)
{ }
int Set::SaleSet() 
{
	int cost = b.SaleBurger() + f.SaleFries() + d.SaleDrink() - 1000;
	return cost;
}
void Set::ShowData() 
{
	cout << "���� ��Ʈ�� �ֹ��ϼ̽��ϴ�." << endl;
}