#include <iostream>
#include <cmath>
#include "MyArray.h"
#include "Circle.h"
using namespace std;

int main() {
    srand(time(NULL));
    MyArray arr;

    for(int i=1; i<11; i++)
    {
        int r = rand()%26+5;
        Circle c1 = {i, r};
        arr.set(i-1, c1);
        cout<<r<<", ";
    }
    cout<<endl;

    arr.sort(true);

    arr.display();

    cout<<arr.min300();

    cout<<"\nI just changed the file lmao";

    //Circle min300 = arr.min300(0);
    //cout<<"Minimum object with area over 300:\n"<< min300.ID << " | radius:" << min300.radius << " - area:" << min300.area << '\n';

    return 0;
}