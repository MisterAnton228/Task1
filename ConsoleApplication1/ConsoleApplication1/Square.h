#pragma once
#include <iostream>

class Square
{
	double side; //��������
public:

	//����������� ������
	Square(double side);

	//���������� ������� ������� �� �������
	double sizeIncrease(double percent);

	//���������� ������� ������� �� �������
	double sizeReduction(double percent);

	//�������� ��������
	double perimeter();

	//������� ��������
	double square();

	//��������� ��������
	double diagonal();
};