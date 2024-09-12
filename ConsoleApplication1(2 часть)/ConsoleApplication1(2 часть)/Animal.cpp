#include "Animal.h"

Animal::Animal(string name, int age, int weight) : name(name), age(age), weight(weight) {}

void Animal::Eat() const
{
	cout << "\n" << name << " ���";
}

void Animal::Sleep() const
{
	cout << "\n" << name << " ����";
}

void Animal::Out() const
{
	cout << "\n\n��������: " << name;
	cout << "\n�������: " << age;
	cout << "\n���: " << weight;
}