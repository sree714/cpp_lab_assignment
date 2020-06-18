/*
Write a program to calculate area of circle using default argument.
*/


#include <iostream>
using namespace std;

float area(float r,float pi=3.141592653589)
{
    return pi * r * r;
}

int main() {
   float radius, area_circle;

   cout << "Enter the radius of circle: ";
   cin >> radius;

   area_circle = area(radius);
   cout << "Area of circle: " << area_circle << endl;

   return 0;
}
