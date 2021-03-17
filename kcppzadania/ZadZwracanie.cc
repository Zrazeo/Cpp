#include<iostream>

using namespace std;
int tab[] = {1,4,6,2};
int a, b, c, *dc;

int wartosc(int a){
    return a;
}

int &referencje(){
    static int b = 5;
    return b;
}

int *wskaznik(){
    static int c = 6;
    int *dc = &c;
    return &c;
}

int *tablica(){
    static int tab[3] = {0,1,2};
    return tab;
}

int main(){
    cout <<"Poprzez wartosc: " << wartosc(4) << endl;
    cout <<"Poprzez referencje: " << referencje() << endl;
    cout <<"Poprzez wskaznik: " << *wskaznik() << endl;
    for(int i = 0; i < 3; i++){
    cout <<"tab wartosc: " << *(tablica() + i)<< endl;
    }
}


