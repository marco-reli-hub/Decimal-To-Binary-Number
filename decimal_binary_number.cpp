// 10. Write a code that will convert decimal number to binary numbers.

#include <iostream>
using namespace std;

int main() 
{
	int number, bit, binary = 0;

	cout << "Enter a number: ";
	cin >> number;

	for (int place = 1; number > 0; place = place * 10) {
		bit = number % 2;
		binary = bit * place + binary;
		number = number / 2;
	}
	cout << "Binary : " << binary << endl;

	return 0;
}
