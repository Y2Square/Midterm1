#include <iostream>
#include <string>
using namespace std;
#include "MyArray.h"


void MyArray::set(int index, Circle s)
{
	data[index].ID = s.ID;
	data[index].radius = s.radius;
    data[index].area = s.radius * s.radius * 3.14;
}

Circle MyArray::getStudentData(int index)
{
	return data[index];
}

void MyArray::display()
{
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << data[i].ID << " | radius:" << data[i].radius << " - area:" << data[i].area << '\n';
	}
	cout << "\n";
}

void MyArray::sort(bool ascending)
{
    Circle temp = data[0];

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(data[j].radius > data[j+1].radius && ascending)
            {
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
            else if(data[j].radius < data[j+1].radius && !ascending)
            {
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
}

int MyArray::min300()
{
    int i=0;
    while(data[i].radius<=300)
    {
        i++;
    }
    return i;
}

/*
Circle MyArray::min300()
{
    int i=0;
    while(data[i].radius<=300)
    {
        i++;
    }
    return data[i];
}


int MyArray::min300(int i)
{
    cout<<data[i].ID<<" | "<<data[i].area<< " | " << i <<endl;

    if(data[i].area>300)
        return i;
    min300(i+1);
}

Circle MyArray::min300(int i)
{
    if(data[i].area>300)
        return data[i];
    else if(i<size)
        min300(i+1);
    else {
        cout<<"\nNo Objects with Area over 300\n";
        exit(1);
    }
}
 */