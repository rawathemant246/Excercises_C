#include <iostream>
#include <string>

using namespace std;
int main()
{
    string name;
    cout<< "May I know your Name : ";
    getline(cin, name);
    cout << "Welcome Mr/Miss" << name;
    return 0;
}


