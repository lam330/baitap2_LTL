// student.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>
#include<conio.h>

using namespace std;

struct Student
{
	string name;
	float mathScore;
	float physicScore;
	float chemistryScore;
};

Student enterOneStudent()// nhap 1 sinh vien
{
	Student person;

	cout << "Enter information\n";
	cout << "Name: ";
	fflush(stdin);
	//getline(cin, person.name);
	cin >> person.name;
	
	cout << "Math score: ";
	cin >> person.mathScore;
	
	cout << "Physic score: ";
	cin >> person.physicScore;

	cout << "Chemistry score: ";
	cin >> person.chemistryScore;

	return person;
}


void displayListOfStudents(Student list[],const int &numberOfStudents)// hien thi nhieu sinh vien
{
	string student;
	string name;
	string mathScore;
	string physicScore;
	string chemistryScore;
	cout << "\t\t List of students";
	for (int i = 0; i < numberOfStudents; i++)// cong chuoi => trinh bay list theo hang ngang
	{
		cout << "\n";
		student += "    Student " + to_string(i) + "\t";
		name += "  name: " + list[i].name + "\t\t";
		mathScore += "  Math score: " + to_string(list[i].mathScore) + "\t";
		physicScore += "  Physic score: " + to_string(list[i].physicScore) + "\t";
		chemistryScore += "  chemistryScore: " + to_string(list[i].chemistryScore) + "\t";
	}

	student += "\n";
	name += "\n";
	mathScore += "\n";
	physicScore += "\n";

	cout << student;
	cout << name;
	cout << mathScore;
	cout << physicScore;
	cout << chemistryScore;
}


int main()
{
	Student listOfStudent[100];
	int number = 0;

	while (true)
	{
		int index;
		cout << "\nWhich one do u want to choose ?";
		cout << "\n1. Enter one student";
		cout << "\n2. Exit\n";
		cin >> index;
		switch (index)
		{
		case 1:
		{
			char repeat = 'y';
			while (repeat != 'n' || repeat != 'N')// nhan n de thoat=> hien thi
			{
				listOfStudent[number] = enterOneStudent();
				cout << "\nDo u want to continue to enter student: ";
				fflush(stdin);
				cin >> repeat;
				number++;
			}
			displayListOfStudents(listOfStudent, number);
			break;
		}
		case 2:
		{
			displayListOfStudents(listOfStudent, number);
			break;
		}

		default:
		{
			cout << "Retry!" << endl;
			break;
		}

		}
	}
	
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
