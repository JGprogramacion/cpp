#include<iostream>
using namespace std;

int main (){
    int numero;
    int calculo=1;
    int cont=0;
    cin>>numero;

    for(int i=1; i<=numero;i++){
        calculo = numero%i;
        
        if(calculo==0){
            cont = cont+1;
        }
        cout<<"i "<<i<<" calculo "<<calculo<<endl<<"contador "<<cont<<endl;
    }
    if(cont>1 && cont <3){
        cout<<"Es un numero primo";
    }
    else{
        cout<<"No es un numero primo";
    }
}