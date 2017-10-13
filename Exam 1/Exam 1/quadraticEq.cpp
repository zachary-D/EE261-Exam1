#include <iostream>
#include <cmath>

using namespace std;

// http://www.mathwarehouse.com/quadratic/the-quadratic-formula.php

int main() {

	double a, b, c;
	cout << "Enter the coefficients a, b, and c, in this order, for quadratic equation ax^2 + bx + c = 0:" << endl;

	cin >> a >> b >> c;

	double root1, root2;

	root1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
	root2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);

	cout << "The roots are " << root1 << " and " << root2 << endl;

	return 0;
}