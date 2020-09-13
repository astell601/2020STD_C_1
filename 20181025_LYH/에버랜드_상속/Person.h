#ifndef __PERSON_H__
#define __PERSON_H__
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char* name;            //�̸�
	int n;                 //�ο�    
	int total;			   //�� �����ݾ�     
	int count;				//�� ź ���̱ⱸ ����
	int height[20];         //Ű ����

public:
	Person(const char* _name, int _n) :n(_n) {
		int names = strlen(_name) + 1;
		name = new char[names];
		strcpy(name, _name);
		cout << "Ű: " << endl;
		for (int i = 0; i < n; i++) {
			cin >> height[i];
		}
	}

	char* GetName() {
		return name;
	}
	int GetNum() {
		return n;
	}
	int* GetHeight() {
		return height;
	}
	void AddTotal(int _total) {
		total += _total * n;
	}
	void AddCount() 
	{
		count++;
	}
	void ShowData() 
	{
		cout << "\n";
		cout << name << "�� �� " << count << "���� ���̱ⱸ�� �̿��ϼ����� ���� �ݾ��� " << total << "���Դϴ�." << endl;
	}

};


#endif