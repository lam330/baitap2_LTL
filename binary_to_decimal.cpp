// binary_to_decimal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<math.h>
using namespace std;

int binaryToDecimal(int binary[8])// quy doi nhi phan sang thap phan
{
	int decimal = 0;
	for (int i = 0; i < 8; i++)// k reversed thi chay tu 8 ve 0
	{
		if (binary[i] == 1)
		{
			decimal += pow(2, i);
		}
	}
	return decimal;
}

void enter(int binary[8])
{
	for (int i = 0; i < 8; i++)
	{
		cout << "binary" << "[" << i << "] = ";
		cin >> binary[i];
	}
}

void display(int binary[8])
{
	for (int i = 0; i < 8; i++)
	{
		cout << binary[i]<<" ";
	}
}


int main()
{
	int binary[8];
	enter(binary);
	cout << "List imported: ";
	display(binary);

	int reversedBinary[8];
	for (int i = 0; i < 8; i++)// dao nguoc so nhap vao 
	{
		static int j = 7;
		reversedBinary[j] = binary[i];
		j--;
	}

	cout << "\nBinary: ";
	display(reversedBinary);

	cout << " to Decimal = " << binaryToDecimal(reversedBinary);

	
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
