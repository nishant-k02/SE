#include <iostream>
using namespace std;


		// Power Program, Factorial Program

int power(int n, int p)
{
	if (p==0)
	{
		return 1;
	}

	int prev_power = power(n, p-1);
	return n * prev_power;
}

int factorial(int m)
{
	if (m == 0)
	{
		return 1;
	}
	
	int prev_fact = factorial(m-1);
	return m * prev_fact;
}

int main()
{
	int n, p, m;
	
	cout << "\t\t\t\tRaised Power Program" << endl;
	
	cout << "\nEnter a Number: ";
	cin >> n;
	
	cout << "Enter Power of number: ";
	cin >> p;
	
	cout << "Answer is: " << power(n, p) << endl;
	
	cout << "\n\t\t\t\tFactorial Program" << endl;
	
	cout << "\nEnter a number you want factorial of : ";
	cin >> m;
	
	cout << "Factorial is : " << factorial(m) << endl;
	return 0;
}