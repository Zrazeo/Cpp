#include <iostream>

using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
   int A = 6, B = 4; 
   swap(&A, &B);
   
   cout<<"A = "<<A<<" B = "<<B<<"";
   
   return 0;
}