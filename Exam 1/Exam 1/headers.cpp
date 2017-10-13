#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {
	ifstream inFile;

	string fileName;
	cin >> fileName;

	inFile.open(fileName);

	string word;

	inFile >> word; // word would contain "#include"
	inFile >> word; // word would contain "<iostream>"
	cout << word.substr(1, word.size() - 2) << endl;

	return 0;
}