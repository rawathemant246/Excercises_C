#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float m1, m2, m3, total, Avg;
    cout << "Enter marks of three subjects :";
    cin >> m1>>m2>>m3;
    total = m1 +m2 +m3;
    Avg = total/3.0;

    if (Avg>= 60)
    cout << "A" << endl;

    else if (Avg >= 35)
    cout <<"B"<<endl;

    else
    cout << "C"<<endl;

    return 0;
}