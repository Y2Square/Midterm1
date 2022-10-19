#include <iostream>
#include "MyArray.h"
using namespace std;

double calculateMean(MyArray, int);

int main()
{
	MyArray myclass;
	Circle student;
	student.name = 'A';
	student.score = 70;
	myclass.set(0, student);
	student.name = 'B';
	student.score = 55;
	myclass.set(1, student);
	student.name = 'C';
	student.score = 67;
	myclass.set(2, student);
	student.name = 'D';
	student.score = 40;
	myclass.set(3, student);
	student.name = 'E';
	student.score = 95;
	myclass.set(4, student);
	myclass.display();
	cout << "\n The mean is " << calculateMean(myclass, 5);

	return 0;
}


double calculateMean(MyArray data, int n)
{
	if (n == 1)
		return data.getStudentData(n - 1).score;
	else
		return ((calculateMean(data, n - 1) * (n - 1) +
			data.getStudentData(n - 1).score) / n);
}

