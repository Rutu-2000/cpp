#include <iostream>
#include <cstdlib>
#include <iomainp>

using namespace std;

int main()
{
    double income , tax;

    cout << "Enter your income" ;
    cin >> income ;

    if ( income < 0)
    {
        cout << "income is invalid" << endl ;

        return 0 ;
    }

    if (income >=0 && income < 5000){

        tax = 0.0;
    }
    else if (income >= 5000 && income<10000) {
        tax = income * 0.06 ;
    }
    else if (income >= 10000 && income < 20000)
    {
        tax = income * 0.12;
    }
    else if (income >= 20000 && income < 50000){
        tax = income * 0.2;
    }
    else {

        tax = income * 0.3 ;
    }

    cout << "Tax: $"<< setprecision(2) << tax << endl ;

    return 0 ;
}
