#include <iostream>
#include <iomanip>

using namespace std;
int main() {
	int part1, part2, part3;
	const int full = 60;
	cout << "Enter three integers between 0 and 20 and separate them by a space:" << endl;
	cin >> part1 >> part2 >> part3;

	float ratio = (part1 + part2 + part3) / full;

	cout << fixed << setprecision(0);
	cout << "The grade in percentage is " << ratio * 100 << '.' << endl;

	return 0;

}