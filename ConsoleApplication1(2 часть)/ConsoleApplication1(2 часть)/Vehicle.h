#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
	//�������� ������
protected:
	string name;
	int price;
	string purpose;

	//����������� ������
public:
	Vehicle(string name, int price, string purpose);

	//������ ������
	void Available();

	void Unavailable();

	void Out() const;
};