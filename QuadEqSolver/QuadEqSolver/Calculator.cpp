#include "stdafx.h" //либа visual studio
#include "Calculator.h" //заголовочный файл калькулятора, с описанием функций
#include <iostream> //библиотека ввода/вывода

//Подключаем пространство имен STD, чтобы постояно его не писать
using namespace std;

//Конструктор без парамертов
Calculator::Calculator()
{
}

//Конструктор, принимающий 3 параметра: a,b,c типа float (плавающая точка, дробь)
Calculator::Calculator(float A, float B, float C)
{
	this->A = A;
	this->B = B;
	this->C = C;
}

//Деструктор без параметров
Calculator::~Calculator()
{
}

void Calculator::setCoeff(float A, float B, float C)
{
	this->A = A;
	this->B = B;
	this->C = C;
}

//Функция, считающая выражение
void Calculator::eval()
{
	//float переменные, нужны для расчетов
	float x1, x2, discriminant, realPart, imaginaryPart;
	
	//Считаем дискриминант
	discriminant = B * B - 4 * A * C;

	//Если дискриминант большн 0
	if (discriminant > 0) {
		//считаем x1
		x1 = (-B + sqrt(discriminant)) / (2 * A);
		//считаем x2
		x2 = (-B - sqrt(discriminant)) / (2 * A);

		//Выводим результат
		cout << "\nRoots are real and different." << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}

	//если дискриминант равен 0
	else if (discriminant == 0) {
		cout << "\nRoots are real and same." << endl;
		//считаем только x1
		x1 = (-B + sqrt(discriminant)) / (2 * A);
		//Результат
		cout << "x1 = x2 =" << x1 << endl;
	}

	//если меньше 0
	else {
		//считаем первую часть комплексного числа
		realPart = -B / (2 * A);
		imaginaryPart = sqrt(-discriminant) / (2 * A);
		//выводим результат
		cout << "\nRoots are complex and different." << endl;
		cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
		cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
	}

}

//Выводим шаблон выражения с текущими переменные, установленными в конструкторе или через setKoeff
void Calculator::printEquationWithCoef()
{
	cout << A << " * x^2 + " << B << " * x + " << C << " = 0" << endl;
}

//Выводи шаблон выражения
void Calculator::printBaseEquation()
{
	cout << "A * x^2 + B * x + C = 0" << endl;
}
