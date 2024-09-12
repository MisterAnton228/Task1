#include "Vehicle.h"

Vehicle::Vehicle(string name, int price, string purpose) : name(name), price(price), purpose(purpose) {}

void Vehicle::Available()
{
	cout << "\n" << name << ": ���� � �������";
}

void Vehicle::Unavailable()
{
	cout << "\n" << name << ": ��� � �������";
}

void Vehicle::Out() const
{
	cout << "\n\n��������: " << name;
	cout << "\n����: " << price;
	cout << "\n��������������: " << purpose;
}