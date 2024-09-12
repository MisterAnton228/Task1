#include "Equipment.h"

Equipment::Equipment(string name, int price, string purpose) : name(name), price(price), purpose(purpose) {}

void Equipment::Repair()
{
	cout << "\n" << name << " ��� �������";
}

void Equipment::Plough()
{
	cout << "\n" << name << " ��� ������� ��� ������";
}

void Equipment::Out() const
{
	cout << "\n\n��������: " << name;
	cout << "\n����: " << price;
	cout << "\n��������������: " << purpose;
}