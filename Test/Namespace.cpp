/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Przestrzenie nazw w C++
 * v0.01
 */

#include <iostream>
using namespace std;

namespace nasza {
    int liczba;

    int dodaj(int a, int b)
    {
        return(a + b);
    }
}
using namespace nasza;

int main() {
    //std::cout << "Test" << std::endl;
    cout << "Test" << endl;
    cout << "a + b = " << dodaj(13, 43) << endl;


    return 0;
}
