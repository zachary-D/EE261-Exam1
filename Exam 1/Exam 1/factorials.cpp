#include <iostream>

long long int factorial(int limit)		//Calculates the factorial of 'limit'
{
	long long int total = 1;	//The value of the factorial
	
	//Multiply total by every value greater than two but less than or equal to
	//the limit, which is equal to 1*2*3*....*limit
	for (int i = 2; i <= limit; i++)
	{
		total *= i;
	}

	return total;
}

void displayFactorial(int limit)		//Calculates and displays the factorial of
{										// 'limit'
	std::cout << limit << "! = " << factorial(limit) << std::endl;
}

int main()
{
	displayFactorial(12);
	displayFactorial(13);

	std::cin.get();	//Hold the window open

	return 0;
}