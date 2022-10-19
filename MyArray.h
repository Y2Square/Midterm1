#pragma once
#include "Circle.h"
using namespace std;
#define data_size 10
class MyArray
{
private:
	int size = data_size;
	Circle data[data_size];
public:
	void set(int, Circle);
	Circle getStudentData(int);
	void display();
    void sort(bool ascending);
    int min300();
};

