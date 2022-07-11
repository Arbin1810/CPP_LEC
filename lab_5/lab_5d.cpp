// finding area of square, rectangle and triangle using function overloading
#include <iostream>
#include <math.h>
using namespace std;
void area(float);
void area(float, float);
void area(float, float, float);

int main()
{
    area(3);
    area(5, 6);
    area(3, 4, 5);
}
void area(float length)
{
    cout << "Area of square:" << length * length << endl;
}
void area(float length, float breadth)
{
    cout << "Area of rectangle:" << length * breadth << endl;
}
void area(float a, float b, float c)
{
    float s;
    s = (a + b + c) / 2;
    cout << "Area of Triangle:" << sqrt(s * (s - a) * (s - b) * (s - c));
}