// reverse_list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void Display(int a[])
{
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << "  ";
	}
}

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = {};

	for (int i = 0; i < 5; i++)
	{
		static int j = 4;
		b[j] = a[i];
		j--;
	}

	cout << "Original List\t    : ";
	Display(a);

	cout << " \nList after reserving: ";
	Display(b);
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
