#include <iostream>

using namespace std;

int main()
{
    int n ;
    long fact = 1;

    cout << "Enter the number: " ;
    cin >> n ;

    if(n < 0)
    {
        cout << "Unable to find the factorial of negative number" << endl ;
        return 0 ;
    }

    int i = n ;
    while(i>=1)
    {
        fact = fact * i;
        --i;
    }
    cout << "Factorial is :" << fact << endl ;
}
