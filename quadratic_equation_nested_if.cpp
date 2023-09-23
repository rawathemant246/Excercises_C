#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a,b,c,root1, root2, discriminant;
    cout << "Enter the value of coefficient of a,b,c : ";
    cin >> a>> b>> c;

    discriminant = b*b - 4*a*c;

    if (discriminant ==0)
    {
        cout << "Roots are  real and equal"<<endl;

        root1 = (-b / (2*a));

        cout << "Root1 and Root2 are equal with values :" <<root1<<endl;
    }
    else
    {
        if (discriminant > 0)
        {
            cout << "Roots are real and unequal"<<endl;

            root1 = (-b + sqrt(discriminant)/(2*a));

            root2 = (-b - sqrt(discriminant)/(2*a));

            cout << "Root1 and Root2 are : " <<root1 << ' '<<root2<<endl;

        }
        else
        {
            cout << " Roots are imaginary"<<endl;

            
        }

        
    }
    return 0;

}