#pragma once
#include <iostream>
#include <string>

using namespace std;

class Building
{
	//�������� ������
private:
	string name;
	int square;
	string purpose;

	//����������� ������
public:
	Building(string name, int square, string purpose);
	
	//������ ������
	void Construct();

	void NotConstruct();

	void Out() const;
};

