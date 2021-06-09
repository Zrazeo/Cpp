#ifndef Zad4C_h
#define Zad4C_h

#include<iostream>
#include<fstream>
#include<string>
#include<thread>
#include<chrono>
#include<iomanip>
#include<stdio.h>

#include"../include/Zad4.h"

#ifndef test
#define abc
#endif
#define multiply( f1, f2 ) ( f1 * f2 )
#define pas( n ) printf_s( "token" #n " = %d", token##n )
#define stringify(x) #x


using namespace std;


void Zad4::LManipulacjaStrumieniemCout(){
    cout << setw(10);
    cout << "Hello" << endl;

    cout << setprecision(5) << 3.14159 << endl;

    cout << setfill('.') << setw(10);
    cout << "hello" << endl;

    double a = 3.1415926534;
    double b = 2006.0;
    double c = 1.0e-10;

    cout << "fixed:\n" << fixed;
    cout << a << '\n' << b << '\n' << c << '\n';

    cout << "scientific:\n" << scientific;
    cout << a << '\n' << b << '\n' << c << '\n';

    cout << hex << 70 << endl;
    cout << dec << 70 << endl;
    cout << oct << 70 << endl;
}

void Zad4::ZadCinCoutFile(){
    cout << "Wypisywanie na ekran" << endl;

    ofstream file("C:\\Users\\arkad\\Desktop\\kcpp-main\\kcppBasic\\src\\README.txt");    
    file << "test";
    file.close();

    string text;
    ifstream odczyt("C:\\Users\\arkad\\Desktop\\kcpp-main\\kcppBasic\\src\\README.txt");
    odczyt >> text;
    cout << text << endl;
    odczyt.close();
}

void Zad4::ZadCandCPP(){
    printf("Hello World\n");
    cout << "Hello World";
}

void Zad4::ZadParzysta(){
	modulo();
	cout << endl;
	bin();
	cout << endl;
	opWarunkowy();
}

void Zad4::ZadParzystaCase(){
    int x;
    cout << "Podaj funkcje ktorej chcesz uzyc: "<< endl<<
    "1. Modulo"<< endl<<
    "2. Bitowe"<< endl<<
    "3. Warunkowe"<< endl;
    cin >> x;
    
    switch(x){
        case 1:
            modulo();
            break;
        case 2:
            bin();
            break;
        case 3:
            opWarunkowy();
            break;
        default:
            cout<<"Wybierz liczbe od 1 do 3" ;
  	}
}

void Zad4::ZadPetle(){
	a();
	cout << endl;
	b();
	cout << endl;
	c();
}

void Zad4::ZadSwitch(){

    int input;
    cout << "Wybierz opcje (1 lub 2) " << endl;
    cin >> input; 

    switch(input)
    {
        case 1: {
            cout << "opcja 1" << endl;
            break;
        }
        case 2: {
            cout << "opcja 2" << endl;
            break;
        }
        default: {
            cout << "domyslna" << endl;
            break;
        }
    }
 }



int Zad4::multi(int a, int b){
    return a * b;
}

string Zad4::hasz(int a){
    return to_string(a);
}

string Zad4::haszahsz(int a, int b){
    return to_string(a) + to_string(b);
}
void Zad4::PreProcesor(){
    


    int a = 9;
    int b = 10;
    int token9 = 9;
    cout << multi(a,b) << endl;
    cout << hasz(a) << endl;
    cout << haszahsz(a,b) << endl;

    cout << multiply(a,b) << endl;
    //cout << pas(9) << endl;
    cout << stringify(a) << endl;
}





void Zad4::modulo(){
    int n = 2048;
    if ( n % 2 == 0)
        cout << "Liczba parzysta"<< endl;
    else
        cout << "Liczba nieparzysta"<< endl;
}

void Zad4::bin(){
    int n = 2048;
    if(n & 1)  
        cout <<"Liczba nieparzysta"<< endl; 
    else 
        cout <<"Liczba parzysta."<< endl;
}

void Zad4::opWarunkowy(){
    int n = 2048;
    cout << ((n & 1) ? "Liczba nieparzysta" : "Liczba parzysta") << endl;
}

void Zad4::a(){

    int i = 0;

    while (i < 10) {
        cout << i << "\n";
        i++;
    }

    while (i < 10) {
        cout << i << "\n";
        ++i;
    }
}

void Zad4::b(){
    int i = 4;
    do
    {
        cout << "Napis" << endl;
        i--;
    } while( i > 0 );
}


string Zad4::c(){

    int i;

    for(i = 1; i <= 10; i++)
    {
    if( i == 2){
        continue;  
    }
    if (i == 6){ 
        break;
    }
    if( i == 5){
        return "koniec programu";
    }
    cout << i << endl; 
    }
}


#endif