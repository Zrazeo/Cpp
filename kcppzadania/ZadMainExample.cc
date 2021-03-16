#include<iostream>
#include<cstring>

using namespace std;

extern "C" void a(){
    printf("extern C name function a\n");
}

extern "C" void b(){
    printf("extern C name function b\n");
}

int c(){
    return 1;
}

int d(){
    return 2;
}

int e(){
    return 3;
}

int main(int argc, char *argv[]){
    for (int i = 0; i < argc; i++){
        if(strcmp(argv[i],"a")==0){
            a();
        }
        if(strcmp(argv[i],"b")==0){
            b();
        }
        if(strcmp(argv[i],"c")==0){
            cout<<c()<<endl;
        }
        if(strcmp(argv[i],"d")==0){
            cout<<d()<<endl;
        }
        if(strcmp(argv[i],"e")==0){
            cout<<e()<<endl;
        }
    }

    return 0;
}