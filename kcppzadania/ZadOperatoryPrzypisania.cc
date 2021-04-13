#include <iostream>
using namespace std;

void OperatoryArytmetyczne() {
    int n = 1;
    cout << "Dodawanie " << n + 2 << endl;
    cout << "Odejmowanie " << n - 2 << endl;
    cout << "Mnożenie " << n * 2 << endl;
    cout << "Dzielenie " << n / 2 << endl;
    cout << "Dzielenie modulo " << n % 2 << endl;
    cout << "Pre-inkremetacja  " << n++ << endl;
    cout << "Post-inkrementacja " << ++n << endl;
    cout << "Pre-dekrementacja " << n-- << endl;
    cout << "Post-dekrementacja " << --n << endl;

}

void OperatoryPrzypisania() {
    int n = 1
    cout << n << endl;
    n += 2;
    cout << n << endl;
    n *= 2;
    cout << n << endl;
    n -= 2;
    cout << n << endl;
    n /= 2;
    cout << n << endl;
    n %= 2;
    cout << n << endl;
}


int main() {
    OperatoryArytmetyczne();
    OperatoryPrzypisania();
    return 0;   
}
