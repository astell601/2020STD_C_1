#pragma once
#include <iostream>
#include "Menu.h"
using namespace std;

// �ֹ� Ŭ����
class McDonald {
private:
	int total;  // �� ������
	bool cash; // ����orī��
public:
	McDonald();
	void BuyBurger(const char* name, int n);
	void BuyFries(int n);
	void BuyDrink(int n);
	void BuyIcecream(int n);
	void BuySet(const char* name);
	void ShowData();

};
