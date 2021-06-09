#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include"../include/Zad3.h"

using namespace std;

void Zad3::ZadAdresowaniePamieci(){
    int x, y, z;
    x = 5;
    y = 10;
    z = 15;

    cout << "X: " << &x << " Wartosc: " << x <<  endl;
    cout << "Y: " << &y << " Wartosc: " << y <<  endl;
    cout << "Z: " << &z << " Wartosc: " << z <<  endl;
}

void Zad3::ZadIq(){
    int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80 };
    int *q = arr;
    int i = 2;

    cout << i[q] << endl;
    cout << *(i+q) << endl;
    //działanie i[q] jest odpowiednikiem działania *(i+q), po prostu została zamieniona kolejność ale działanie zostanie wykonane tak samo, zostanie wskazanie miejsce pamięci numer i zarezerwowane przez tablicę (wskaźnik)
}

void Zad3::ZadArytmetykaWskaznikow(){
    int *wsk_int;
	float x;
	int z = 10, a, b, c, *q;
	int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 }; 
	q = &z;
	cout << "q = "      << q << endl;
	cout << "*q = "     << *q << endl;
	cout << "q++ = "    << q++ << endl;
	cout << "++q = "    << ++q << endl;
	// cout << "++*q = "   << ++*q << endl; nie działa
	// cout << "++(*q) = " << ++(*q) << endl; nie działa
	// cout << "++*(q) ="  << ++*(q) << endl; nie działa
	cout << "*q++ ="     << *q++ << endl;
	cout << "(*q)++ = " << (*q)++ << endl;
	cout << "*(q)++ = " << *(q)++ << endl;
	cout << "*++q = "   << *++q << endl;
	cout << "*(++q) = " <<*(++q) << endl;
	cout << "//-------------------------------------------------- " << endl;

	int *p = arr;	
	cout << "p = "      << p << endl;
	cout << "*p = "     << *p << endl;
	cout << "p++ = "    << p++ << endl;
	cout << "++p = "    << ++p << endl;
	// cout << "++*p = "   << ++*p << endl; nie działa
	// cout << "++(*p) = " << ++(*p) << endl; nie działa
	// cout << "++*(p) ="  << ++*(p) << endl; nie działa
	cout << "*p++ ="     << *p++ << endl;
	cout << "(*p)++ = " << (*p)++ << endl;
	cout << "*(p)++ = " << *(p)++ << endl;
	cout << "*++p = "   << *++p << endl;
	cout << "*(++p) = " <<*(++p) << endl;

	cout << "//-------------------------------------------------- " << endl;
	a = b = c = 0; 
	cout <<"1. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	b = 10; 
	cout <<"2. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	wsk_int = &b;
	*wsk_int = 20;
	cout <<"3. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	wsk_int = &a;
	*(wsk_int-1) = 30;
	cout <<"4. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*(&a - 1) = 40; 
	cout <<"5. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*(&c + 1) = 50;
	cout <<"6. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*( (int*)&x + 2) = 60;
	cout <<"7. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*(int*)( &x + 1) = 70;
	cout <<"8. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*((int*)&wsk_int - 2) = 80;
	cout <<"9. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*(int*) (&wsk_int - 1) = 90;
	cout <<"10. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
}

void Zad3::ZadWywolywanieFunkcji(){
  cout << "Wywoływanie funkcji. Podaj 1 lub 2: ";
  int choice;
  cin >> choice;
  switch(choice){
  case 1:
    fun1();
    break;;
  case 2:
    fun2();
    break;;
  default:
    cout << "wybrano zla funkcje";
    break;;
  }
}

void Zad3::ZadOperatoryPrzypisania(){
  cout << "Operatory przypisania(1) oraz operatory arytmetyczne(2)" << endl << "Podaj 1 lub 2: " << endl;
  int choice;
  cin >> choice;
  switch(choice){
  case 1:
    OperatoryPrzypisania();
    break;;
  case 2:
    OperatoryArytmetyczne();
    break;;
  default:
    cout << "wybrano zla funkcje";
    break;;
}
}
    


void Zad3::ZadPriorytetyOperatorow(){
  cout<< "2 + 3 - 4 * 5 / 6 = " << 2 + 3 - 4 * 5 / 6.0<<std::endl;
}

void Zad3::ZadBin2Dec(){
    int n;
    cout<< "Podaj liczbe do przeliczenia = ";
    cin >> n;
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    cout << decimalNumber << endl;
}

void Zad3::ZadDec2Bin(){
    int n;
    cout<< "Podaj liczbe do przeliczenia = ";
    cin >> n;
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    cout << r << endl;
}

void Zad3::fun1(){
    cout << "Fun1" << endl;
}

void Zad3::fun2(){
    cout << "Fun2" << endl;
}
void Zad3::OperatoryPrzypisania() {
    int n = 1;
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

void Zad3::OperatoryArytmetyczne() {
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