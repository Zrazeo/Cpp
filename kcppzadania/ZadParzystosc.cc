#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    cout << n << endl;

    if ( n % 2 == 0)
        cout << "Liczba parzysta"<< endl;
    else
        cout << "Liczba nieparzysta"<< endl;

    if(n & 1)  
        cout <<"Liczba nieparzysta"<< endl; 
    else 
        cout <<"Liczba parzysta."<< endl;

    // sprawdza czy 1 bit jest zerem albo jedynką
    return 0;
}