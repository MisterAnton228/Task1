#include "Building.h"

Building::Building(string name, int square, string purpose) : name(name), square(square), purpose(purpose) {}

void Building::Construct()
{
	cout << "\n" << name << ": ���������";
}

void Building::NotConstruct()
{
	cout << "\n" << name << ": � �������� �������������";
}

void Building::Out() const
{
	cout << "\n\n��������: " << name;
	cout << "\n�������: " << square;
	cout << "\n��������������: " << purpose;
}