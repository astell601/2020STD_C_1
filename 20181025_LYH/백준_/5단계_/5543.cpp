/*
< ��ٳ��� >
�Է��� �� 5�ٷ� �̷���� �ְ�, �������� ����, ������ ����, ������� ����,
������ ����, ������ ������ ������� �־�����.

������ ��� 0�� �̻�, 100�� ������ 5�� ����̴�. ����, ��� ������ �׻� �����̴�.
*/

#include <iostream>
using namespace std;

int main(void) {
	int b[3];
	int coke, soda;
	int burger, drink, total;

	for (int i = 0; i < 3; i++)
		cin >> b[i];
	cin >> coke >> soda;

	burger = b[0];
	for (int i = 1; i <= 2; i++) {
		if (b[i] < burger)
			burger = b[i];
	}

	if (coke < soda)
		drink = coke;
	else
		drink = soda;

	total = burger + drink - 50;
	cout << total << endl;
	return 0;
}