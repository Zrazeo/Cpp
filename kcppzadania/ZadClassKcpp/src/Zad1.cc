#ifndef Zad1C_h
#define Zad1C_h

#include<iostream>
#include<cstring>
#include "../include/Zad1.h"

using namespace std;

extern "C" void Zad1::a(){
    printf("extern C name function a\n");
}

extern "C" void Zad1::b(){
    printf("extern C name function b\n");
}

int Zad1::c(){
    cout << "Funkja zwraca: 1" << endl;
    return 1;
}

int Zad1::d(){
    cout << "Funkja zwraca: 2" << endl;
    return 2;
}

int Zad1::e(){
    cout << "Funkja zwraca: 3" << endl;
    return 3;
}

#endif
