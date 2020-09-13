#include <iostream>
#include "Mc.h"
using namespace std;

McDonald::McDonald() : total(0)
{
	cout << "������ ������ 1, �ƴϸ� 0�� �Է��ϼ���: ";
	cin >> cash;
}

void McDonald::BuyBurger(const char* name, int n) 
{
	Burger burger(name, n);
	total += burger.SaleBurger();
	burger.ShowData();
}

void McDonald::BuyFries(int n) 
{
	Fries fries(n);
	total += fries.SaleFries();
	fries.ShowData();
}

void McDonald::BuyDrink(int n) 
{
	Drink drink(n);
	total += drink.SaleDrink();
	drink.ShowData();
}

void McDonald::BuyIcecream(int n) 
{
	Icecream icecream(n);
	total += icecream.SaleIcecream();
	icecream.ShowData();
}

void McDonald::BuySet(const char* name) 
{
	Set set(name);
	total += set.SaleSet();
	cout << name;
	set.ShowData();
}

void McDonald::ShowData() 
{
	if (cash)
		cout << "�������� �� " << total << "���Դϴ�." << endl;
	else
		cout << "ī��� �� " << total << "���Դϴ�." << endl;
}
