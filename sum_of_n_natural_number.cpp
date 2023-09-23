#include <iostream>

using namespace std;

int main()
{
    int n, sum =0;
    cout << "Enter the number to find the sum of n natural numbers :";
    cin >> n;

    for (int i =1; i<=n; i++)
    {
    
        sum +=i;
        

    }
    cout << sum;
    return 0;
}