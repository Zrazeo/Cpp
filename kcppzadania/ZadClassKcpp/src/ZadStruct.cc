#include<iostream>
#include<string>
using namespace std;

struct osoba {
	string imie;
	string nazwisko;
	int wiek;
};

class Structure{
public:
  
  struct osoba {
    string imie;
    string nazwisko;
    int wiek;
  };
    osoba listonosz; 
 
    
Structure(){
    listonosz.imie = "Jan";
    listonosz.nazwisko = "Kowalski";
}
    
  void printosoba(osoba q){
    cout << q.imie << " " << q.nazwisko << " " << q.wiek;
  }
		
};
