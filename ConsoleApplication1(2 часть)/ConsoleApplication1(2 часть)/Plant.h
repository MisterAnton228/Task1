#pragma once
#include <iostream>
#include <string>

using namespace std;

class Plant
{
	//�������� ������
protected:
	string name;
	string type;
	int age;

	//����������� ������
public:
	Plant(string name, string type, int age);

	//������ ������
	void Fruit();

	void Vegetable();

	void Out() const;
};