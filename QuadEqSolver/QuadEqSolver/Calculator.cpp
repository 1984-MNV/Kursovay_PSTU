#include "stdafx.h" //���� visual studio
#include "Calculator.h" //������������ ���� ������������, � ��������� �������
#include <iostream> //���������� �����/������

//���������� ������������ ���� STD, ����� �������� ��� �� ������
using namespace std;

//����������� ��� ����������
Calculator::Calculator()
{
}

//�����������, ����������� 3 ���������: a,b,c ���� float (��������� �����, �����)
Calculator::Calculator(float A, float B, float C)
{
	this->A = A;
	this->B = B;
	this->C = C;
}

//���������� ��� ����������
Calculator::~Calculator()
{
}

void Calculator::setCoeff(float A, float B, float C)
{
	this->A = A;
	this->B = B;
	this->C = C;
}

//�������, ��������� ���������
void Calculator::eval()
{
	//float ����������, ����� ��� ��������
	float x1, x2, discriminant, realPart, imaginaryPart;
	
	//������� ������������
	discriminant = B * B - 4 * A * C;

	//���� ������������ ������ 0
	if (discriminant > 0) {
		//������� x1
		x1 = (-B + sqrt(discriminant)) / (2 * A);
		//������� x2
		x2 = (-B - sqrt(discriminant)) / (2 * A);

		//������� ���������
		cout << "\nRoots are real and different." << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}

	//���� ������������ ����� 0
	else if (discriminant == 0) {
		cout << "\nRoots are real and same." << endl;
		//������� ������ x1
		x1 = (-B + sqrt(discriminant)) / (2 * A);
		//���������
		cout << "x1 = x2 =" << x1 << endl;
	}

	//���� ������ 0
	else {
		//������� ������ ����� ������������ �����
		realPart = -B / (2 * A);
		imaginaryPart = sqrt(-discriminant) / (2 * A);
		//������� ���������
		cout << "\nRoots are complex and different." << endl;
		cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
		cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
	}

}

//������� ������ ��������� � �������� ����������, �������������� � ������������ ��� ����� setKoeff
void Calculator::printEquationWithCoef()
{
	cout << A << " * x^2 + " << B << " * x + " << C << " = 0" << endl;
}

//������ ������ ���������
void Calculator::printBaseEquation()
{
	cout << "A * x^2 + B * x + C = 0" << endl;
}
