#include <iostream>
#include "Menu.h"
#include "Mc.h"
using namespace std;

int main(void) {
	McDonald buyer1;
	buyer1.BuyBurger("�Ұ��", 2);
	buyer1.BuyDrink(2);
	buyer1.ShowData();

	McDonald buyer2;
	buyer2.BuyIcecream(4);
	buyer2.BuyFries(1);
	buyer2.ShowData();

	McDonald buyer3;
	buyer3.BuySet("����");
	buyer3.BuySet("������");
	buyer3.ShowData();

	return 0;
}