#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    float Basic_salary, percentage_allowance, deduction, Net_salary;
    cout << "Enter the Basic Salary of the person :";
    cin >> Basic_salary;
    cout << "Enter the Percentage of Allowance : ";
    cin >> percentage_allowance;
    cout << "Enter the Percentage of Deduction :";
    cin >> deduction;

    Net_salary = Basic_salary + Basic_salary*percentage_allowance/100 - Basic_salary * deduction/100;

    cout << "Net Salary of a Person is : " <<Net_salary;

    return 0;

}