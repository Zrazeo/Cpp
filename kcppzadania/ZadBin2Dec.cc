#include <iostream>
#include <cmath>
using namespace std;

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int main()
{
    long long n;

    cout << "Liczba binarna ";
    cin >> n;
 
    cout << n << " = " << convertBinaryToDecimal(n) << endl;
    return 0;
}