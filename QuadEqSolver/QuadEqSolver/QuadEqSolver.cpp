// QuadEqSolver.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "Calculator.h"

using namespace std;

//Точка входа в программу
int main()
{
	//Создаем новый экземпляр калькулятора
	Calculator calculator;
	//Выводим подсказу - шаблон изображения
	calculator.printBaseEquation();
	
	//Создаеи 3 переменные типа float (плавающая точка, дроби)
	float a, b, c;
	
	//Выводим информацию о том, что нужно ввести 3 коэффициента
	cout << "Enter coefficients a, b and c: " << endl;
	cout << "a = ";
	cin >> a; //читаем первую цифру и пишем в 'a'
	cout << "b = ";
	cin >> b; //читаем вторую цифру и пишем в 'b'
	cout << "c = ";
	cin >> c; //читаем третью цифру и пишем в 'c'
	cout << endl;
    
	//Устанавливаем числа в калькуляторе
	calculator.setCoeff(a, b, c);
	//Выводим построенное изображение с подстановкой введенных данных
	calculator.printEquationWithCoef();
	//Считаем 
	calculator.eval();

	cout << "Enter to exit...";
	system("pause");
	
	return 0;
}

