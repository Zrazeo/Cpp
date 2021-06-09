#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

class Unia{
	public:
		union stat{
            int first;
            float second;
		};
		stat a;
        
        Unia(){
        a.first = 1;
        a.second = 2;
		}
	
		void wypiszStat(){
            cout << a.first << " " << a.second << endl;
		}
};