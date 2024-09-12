#include "Plant.h"

Plant::Plant(string name, string type, int age) : name(name), type(type), age(age) {}

void Plant::Fruit()
{
	cout << "\n" << name << " - �����";
}

void Plant::Vegetable()
{
	cout << "\n" << name << " - ����";
}

void Plant::Out() const
{
	cout << "\n\n��������: " << name;
	cout << "\n��� �������: " << type;
	cout << "\n���� ���������� (� ����): " << age;
}