#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, discriminant; 
    float root1, root2;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Enter the value of c: ";
    cin >> c;

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Two distinct real roots are: " << root1 << " and " << root2 << endl;
    } 
    else if (discriminant == 0) {
        root1 = -b / (2*a);
        cout << "One real root (repeated) is: " << root1 << endl;
    } 
    else {
        float realPart = -b / (2*a);
        float imaginaryPart = sqrt(-discriminant) / (2*a);
        cout << "Complex conjugate roots are: " << realPart << " + " << imaginaryPart << "i and " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}


