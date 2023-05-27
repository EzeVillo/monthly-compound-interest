#include <string>
#include <iostream>

using namespace std;

#define annualMonths 12

double monthlyCompoundInterest(double, int);

int main()
{
    cout << monthlyCompoundInterest(73.4, 48);
}

double monthlyCompoundInterest(double annualInterest, int months)
{
    const double monthlyInterest = annualInterest / annualMonths;
    double totalInterest = 0;

    for (int i = 0; i < months; i++)
        totalInterest = totalInterest + monthlyInterest + monthlyInterest * totalInterest / 100;

    return totalInterest;
}