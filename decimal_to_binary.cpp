// decimal_to_binary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void decimalToBinary(int binary[], int number)
{
	int i = 0;
	//int binary[8];
	while (number > 0)
	{
		binary[i] = number % 2;
		number = number / 2;
		i++;	
	}

	for (int j = i - 1; j > 0; j--)// in binary
	{
		cout << binary[j];
	}
	
}

int main()
{
	int decimal = 0;
	int binary[8];
	cout << "Enter decimal: ";
	cin >> decimal;

	decimalToBinary( binary,decimal);


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
