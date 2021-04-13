#include <iostream>

using namespace std;

string convertDecimalToBinary(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}

int main() {
    long long n;

    cout << "Liczba binarna ";
    cin >> n;
 
    cout << n << " = " << convertDecimalToBinary(n) << endl;
    return 0;
   
}
