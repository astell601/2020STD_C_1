#include <iostream>
using namespace std;

int main(void) {
	int a;

	while (true)
	{
		cin >> a;
		if (0 <= a <= 100)
			break;
		else
			cout << "�߸��� �Է��Դϴ�." << endl;
	}

	if (a >= 90)
		cout << 'A' << endl;
	else if (a >= 80)
		cout << 'B' << endl;
	else if (a >= 70)
		cout << 'C' << endl;
	else if (a >= 60)
		cout << 'D' << endl;
	else
		cout << 'F' << endl;

	return 0;

}