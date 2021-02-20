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

double print_pow(double base, int exponent)
{
		
    
	double myPower = power(base, exponent);
	cout << base<< " raised to the "<< exponent <<" power is " << myPower <<endl ;

}

int main() 
{
	double base;
	int exponent;
	
	cout << "Enter the base : ";
	cin >> base;
	cout << "Enter the exponent : ";
	cin >> exponent ;
	print_pow(base,exponent);


	return 0;
}
