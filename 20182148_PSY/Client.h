#ifndef __CLIENT_H
#define __CLIENT_H

#include "horse.h"

class Client
{
	int num, myMoney, min;
	Horse horse;
public:
	Client (int money, int n, int m) : myMoney(money), num(n), min(m) {}
	void PAY()
	{
		if (myMoney >= horse.SaleHorse(num))
			cout << "�Ž�����: " << myMoney - horse.SaleHorse(num) << "\n";
		else
			cout << "�ѵ��ʰ�" << "\n";

	}
	void TAKE()
	{
		if (horse.Full(num)&& horse.WaitTime(min))
			cout <<horse.Seat(num)<< "�� ž���ϼ���" << endl;
		else if (horse.WaitTime(min) == 0 or horse.Full(num) == 0)
			if(horse.WaitTime(min)==0)
				cout << min % 10 << "�� �� ž�� ����" << endl;
			else if (horse.Full(num) == 0)
				cout <<horse.Seat(num)<< "�� ž�� ����" << endl;

	}


};


#endif