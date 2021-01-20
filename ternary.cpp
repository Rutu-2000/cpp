#include <iostream>

using namespace std;

int main()
{
    int a,b, result ;

    cout << "Input first number: ";
    cin >> a ;

    cout << "Input second number: ";
    cin >> b ;
    /*
    if (a>b){
        result = a+b ;
    }
    else{
        result = a - b;
    }
    */
    result = (a>b)? a + b: a - b ;

    cout << result << endl ;
    return 0 ;
}
// max = (a>b && a>c)? a : ((b>c)?b:c);
