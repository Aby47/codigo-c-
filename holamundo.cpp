#include <iostream>
using namespace std;
int main (){
    char palabra[100]="ho*fl*ua*rm*ou*ln*ado";
    for (int e=0;e<21;e++){
        if(palabra[e]=='*'){
            e=e+1;
            }
        else{cout<<palabra[e];
        }}
    return 0;
}
