/*
�� ������ �־��� ��, �� ��°�� ū ������ ����ϴ� ���α׷�
*/
#include <iostream>
using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	int sort[3] = { a,b,c };
	
	for (int i = 2; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (sort[j] < sort[j + 1]) {
				int swap = sort[j];
				sort[j] = sort[j + 1];
				sort[j + 1] = swap;
			}
		}
	}

	cout << sort[1] << endl;
	return 0;
}