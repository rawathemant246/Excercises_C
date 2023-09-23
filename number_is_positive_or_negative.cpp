#include <iostream>

using namespace std;

int main()
{

    int num;

    cout << "Enter the number to be checked: ";
    cin >> num;

    if (num >=0)
    {
        cout << "Given number is positvie";
    }
    else
    {
        cout << "Given number is negative";
    }
    return 0;
}