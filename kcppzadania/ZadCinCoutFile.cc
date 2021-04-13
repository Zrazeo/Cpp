#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
    cout << "Wypisywanie na ekran" << endl;

    ofstream file("C:\\Users\\arkad\\Desktop\\kcpp-main\\kcppBasic\\src\\README.txt");    
    file << "test";
    file.close();

    string text;
    ifstream odczyt("C:\\Users\\arkad\\Desktop\\kcpp-main\\kcppBasic\\src\\README.txt");
    odczyt >> text;
    cout << text << endl;
    odczyt.close();

    return 0;
}