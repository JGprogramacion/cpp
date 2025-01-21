#include<iostream>
using namespace std;

int main(){
    int numero;
    int resultado;
    cin>>numero;

    cout<<"TABLA DE MULTIPLICAR DEL NUMERO: "<<numero<<endl<<endl;
    for(int i=0;i<=10;i++){
        resultado = i*numero;
        cout<<numero<<" * "<<i<<" = "<<resultado<<endl;
    }
}