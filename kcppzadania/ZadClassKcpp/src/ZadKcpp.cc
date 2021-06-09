#include<iostream>
#include"Zadania.cc"

using namespace std;

class ZadKcpp{
    public:
        int sekcja();
    private:
        void Zadanie1();
        void Zadanie2();
        void Zadanie3();
        void Zadanie4();
        void Zadanie5();
};

int ZadKcpp::sekcja(){
	cout << "Podaj numer sekcji: ";
	int choice;
	cin >> choice;
		switch(choice){
		case 1:
		  Zadanie1();
		  break;
		case 2:
		  Zadanie2();
		  break;
		case 3:
		  Zadanie3();
		  break;
		case 4:
		  Zadanie4();
		  break;
		case 5:
		  Zadanie5();
		  break;
		default:
		  break;
	}
	return 0;
}

void ZadKcpp::Zadanie1(){
  Zad1 z1;
  cout << "Wybierz funkcje: " << endl;
  cout << "1. extern C name function" << endl << "2. extern C name function" << endl << "3. return 1" << endl << "4. return 2" << endl << "5. return 3" << endl;
  int nr;cin >> nr;
  
  switch(nr){
  case 1:
    z1.a();
    break;
  case 2:
    z1.b();
    break;
  case 3:
    z1.c();
    break;
  case 4:
    z1.d();
    break;
  case 5:
    z1.e();
    break;
  default:
    break;
  }
}

void ZadKcpp::Zadanie2(){
  Zad2 z2;
  cout << "Wybierz funkcje: " << endl;
  cout << "1. &referencje" << endl << "2. *wskaznik" << endl << "3. wartosc" << endl  << "4.* tablica"<< endl << "5. Przekazywanie tablicy" << endl;
  int nr;cin >> nr;
  switch(nr){
  case 1:
    {
    int i = z2.referencje();
    cout << "Zwrot przez refenrencje " << endl << i << endl;
    break;;
    }
  case 2:
    {
    cout << "Zwrot przez wskaznik " << endl << z2.wskaznik() << endl;
    break;
    }
  case 3:
    {
    cout << "Zwrot przez wartosc " << endl << z2.wartosc() << endl;
    break;
    }
  case 4:
    {
    int * t=z2.tablica();
    cout << "Zwrot tablicy " << endl << t[0] << ", " << t[1] << ", " << t[2] << endl;
    break;
    }
  case 5:
    {
    cout << "Przekazywanie tablicy " << endl;
    z2.daj();
    break;
    }
  default:
    break;    
  }
}

void ZadKcpp::Zadanie3(){
  Zad3 z3;
  cout << "Wybierz funkcje: " << endl;
  cout << "1. ZadAdresowaniePamieci" << endl << "2. ZadIq" << endl << "3. ZadArytmetykaWskaznikow" << endl << "4. ZadWywolywanieFunkcji" << endl;
  cout << "5. ZadOperatoryPrzypisania" << endl << "6. ZadPriorytetyOperatorow" << endl << "7. ZadBin2Dec" << endl << "8. ZadDec2Bin"<< endl;

  int nr;
  cin >> nr;

  switch(nr){
  case 1:
    z3.ZadAdresowaniePamieci();
    break;
  case 2:
    z3.ZadIq();
    break;
  case 3:
    z3.ZadArytmetykaWskaznikow();   
    break;
  case 4:
    z3.ZadWywolywanieFunkcji();
    break;
  case 5:
    z3.ZadOperatoryPrzypisania();
    break;
  case 6:
    z3.ZadPriorytetyOperatorow();
    break;
  case 7:
    z3.ZadBin2Dec();
    break;
  case 8:
    z3.ZadDec2Bin();
    break;
  default:
    break;
  }
}

void ZadKcpp::Zadanie4(){
  Zad4 z4;
  cout << "wybierz funkcje" << endl;
  cout << "1. LManipulacjaStrumieniemCout" << endl << "2. ZadCinCoutFile" << endl << "3. ZadCandCPP" << endl << "4. ZadParzysta" << endl << "5. ZadParzystaCase"<<endl;
  cout << "6. ZadPetle" << endl << "7. ZadSwitch" << endl << "8. PreProcesor" << endl;

  int nr;
  cin >> nr;

  switch(nr){
  case 1:
    z4.LManipulacjaStrumieniemCout();
    break;
  case 2:
    z4.ZadCinCoutFile();
    break;
  case 3:
    z4.ZadCandCPP();
    break;
  case 4:
    z4.ZadParzysta();
    break;
  case 5:
    z4.ZadParzystaCase();
    break;
  case 6:
    z4.ZadPetle();
    break;
  case 7:
    z4.ZadSwitch();
    break;
  case 8:
    z4.PreProcesor();
    break;
  default:
    break;
  }
}

void ZadKcpp::Zadanie5(){
  cout << "Wybierz zadanie: " << endl;
  cout << "1. ZadClass" << endl << "2. ZadStruct" << endl << "3. ZadUnia" << endl << "4. ZadKlasaKonstruktor" << endl << "5. ZadStructKonstructor" <<  endl << "6. ZadFriend" << endl << "7. ZadMetodyAbstrakcyjne" << endl;
  int nr; cin >> nr;

  switch(nr){
  case 1:
    {
        Czlowiek czlek;
        czlek.miasto = "Katowice";
        czlek.liczba = 20;
        czlek.printnumer();
        czlek.printliczbe();
        czlek.printmiasto();
        czlek.printprot();
        czlek.info();
    }
  case 2:
    {
      Structure s;
      cout << "klasa zawierajaca strukture osoba" << endl;
      s.printosoba(s.listonosz);
      break;
    }
  case 3:
    {
      Unia u;
      cout << "Klasa z unia" << endl;
      u.wypiszStat();
      break;
    }
  case 4:
    {
      Osoba pierwsza;
      cout << "Konstruktor klasy" << endl;
	  Osoba druga("Jan", "Kowalski");
      break;
    }
  case 5:
    {
      Osoba1 d;
      cout << "klasa ze strukturą" << endl;
      d.print(d.pierwsza);
;
      break;
    }
  case 6:
    {
      
      cout << "przyjaźń klas";
      break;
    }
  case 7:
    cout << "klasy z abstrakcyjnymi figurami i metodami obliczajacymi pole i obwod: " << endl;
    wywolajAbstract();
    break;
  default:
    break;
  }
}

int main(){
	ZadKcpp z;
	z.sekcja();
	
	return 0;
}