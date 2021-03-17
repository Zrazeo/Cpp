#include<iostream>

using namespace std;

void Tabl(int tab[]){
    for(int i = 0; i <= sizeof(&tab)/sizeof(tab[0]); i++){
        cout << tab[i] << endl;
    }
}
int main(){
    int tab[3] = {0,1,2};
    Tabl(tab);
}