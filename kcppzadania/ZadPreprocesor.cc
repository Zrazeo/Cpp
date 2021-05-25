#include <iostream>
#include <string> 
using namespace std;

#ifndef test
#define abc
#endif
#define multiply( f1, f2 ) ( f1 * f2 )
#define pas( n ) printf_s( "token" #n " = %d", token##n )
#define stringify(x) #x

int multi(int a, int b){
    return a * b;
}

string hasz(int a){
    return to_string(a);
}

string haszahsz(int a, int b){
    return to_string(a) + to_string(b);
}

int main(){

    int a = 9;
    int b = 10;
    int token9 = 9;
    cout << multi(a,b) << endl;
    cout << hasz(a) << endl;
    cout << haszahsz(a,b) << endl;

    cout << multiply(a,b) << endl;
    cout << pas(9) << endl;
    cout << stringify(a) << endl;




    return 0;
}