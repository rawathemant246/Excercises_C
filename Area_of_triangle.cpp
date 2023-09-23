#include <iostream>
using namespace std;
int main()
{
    int base, height;
    float area;
    cout << "Enter the base of the Triangle: ";
    cin >> base;
    cout << "Enter the height of the Triangle: ";
    cin >> height;
    area = (base * height)/2;
    cout << "Area of Triangle is :" << area;

    return 0;

}