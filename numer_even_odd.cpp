#include <iostream>

using namespace std;
 
int main ()
{

    int num ;
    cout << "Enter the number to checked for odd or even : ";
    cin >> num;

    if (num %2 ==0)
    {
        cout << "Given number is even";
    }
    else
    {
        cout << "Given number is odd";
    }
    return 0;
}