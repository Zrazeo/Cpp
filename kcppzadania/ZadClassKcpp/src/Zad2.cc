#ifndef Zad2_h
#define Zad2_h

class Zad2{
public:
  int &referencje(){
    static int b = 5;
    return b;
  }
  
  int *wskaznik(){
    static int c = 6;
    int *dc = &c;
    return &c;
  }

  int wartosc(){
    return 4;
  }

  int *tablica(){
    static int tab[3] = {0,1,2};
    return tab;
  }

  void daj(){
    int tab [] = {1,2,3};
    for(int i=0;i<3;i++){
        cout<< tab[i] << endl;
    }
  }
};

#endif
