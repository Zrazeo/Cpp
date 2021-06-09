#include<iostream>
#include<string>

using namespace std;

class Czlowiek{
    private:
        int numer = 1460;
    public:
        string miasto;
        int liczba;
        void printnumer() { cout << numer << endl; }
        void printliczbe() { cout << liczba << endl; }
        void printmiasto();
        void printprot() { cout << prot << endl; }
        inline void info() const {
        cout << miasto <<" o numerze " << numer << endl;
    }
    protected:
        string prot = "Protecc";
};

void Czlowiek::printmiasto() {
  cout << miasto << endl;
}