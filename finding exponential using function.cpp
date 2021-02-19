#include<iostream>
#include <cmath>
using namespace std;  //using directive 

double power(double base, int exponent)
{
	double result = 1;
	for (int i=0; i<exponent; i++)
	{
		result = result * base;
	}

	return result;
}

int main() 
{
	int base, exponent;

	cout << "Enter the base : ";
	cin >> base;
	cout << "Enter the exponent : ";
	cin >> exponent ;

	double myPower = power(base, exponent);
	cout <<  myPower <<endl ;

	return 0;
}
