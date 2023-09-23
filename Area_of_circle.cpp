#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    float radius, Area;
    cout << "Enter the Radius of Circle : ";
    cin >> radius;
    Area = 22/7.0 * radius * radius;
    cout << "Area of Circle is : " << Area;

    return 0;
}