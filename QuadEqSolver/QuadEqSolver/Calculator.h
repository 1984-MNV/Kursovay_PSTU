#pragma once
class Calculator
{
public:
	Calculator();
	Calculator(float A, float B, float C);
	~Calculator();
	void setCoeff(float A, float B, float C);
	void eval();
	void printEquationWithCoef();
	void printBaseEquation();
private:
	float A;
	float B;
	float C;
};

