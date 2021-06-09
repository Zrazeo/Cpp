#include<iostream>
#include<string>

using namespace std;

class Osoba1{
public:
  struct osoba{
    string imie;
    string nazwisko;

  };
  
  osoba pierwsza;
  
  Osoba1(){
    pierwsza = {"Jan", "Kowlaski"};
  }
  
  void print(osoba d){
    cout << d.imie << " " << d.nazwisko << endl;
  }
};