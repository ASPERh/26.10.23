#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double num1;
	double num2;
	double sum;
	double *pnum1 = &num1;
	double *pnum2 = &num2;
	double *psum = &sum;
	double **ppnum1 = &pnum1;
	double **ppnum2 = &pnum2;
	double **ppsum = &psum;
	int height;
	int *pheight = &height;
	int **ppheight = &pheight;
	int ideal_weight;
	double weight;
	double *pweight = &weight;
	double **ppweight = &pweight;
	
	cout << "Введите первое число: ";
	cin >> **ppnum1;
	cout << "Введите второе число: ";
	cin >> **ppnum2;
	cout << "Сумма чисел = " << **ppnum1 + **ppnum2 << "\n";

	cout << "Введите ваш рост: ";
	cin >> **ppheight;
	cout << "Введите ваш вес:";
	cin >> **ppweight;

	ideal_weight = **ppheight - 110;

	if (**ppweight < ideal_weight)
	{
		cout << "Вам надо поднабрать " << ideal_weight - **ppweight << " kg";
	}
	else if (**ppweight > ideal_weight)
	{
		cout << "Вам нужно похудеть " << **ppweight - ideal_weight << " kg";
	}
	else
	{
		cout << "У вас идеальный вес";
	}
}