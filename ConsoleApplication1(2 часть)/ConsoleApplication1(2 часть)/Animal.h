#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal
{
	//�������� ������
private:
	string name;
	int age;
	int weight;

	//����������� ������
public:
	Animal(string name, int age, int weight);


	//������ ������
	void Eat() const;

	void Sleep() const;

	void Out() const;
};