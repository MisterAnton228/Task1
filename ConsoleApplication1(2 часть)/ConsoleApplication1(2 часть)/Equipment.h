#pragma once
#include <iostream>
#include <string>

using namespace std;

class Equipment
{
	//�������� ������
protected:
	string name;
	int price;
	string purpose;

	//����������� ������
public:
	Equipment(string name, int price, string purpose);

	//������ ������
	void Repair();

	void Plough();

	void Out() const;
};