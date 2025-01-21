#include<iostream>
using namespace std;

int main(){
    int valor;
    int suma;
    int inicio=1;
    int sumaP = 0;
    cout<<"SERIE FIBONACCI"<<endl;
    cin>>valor;
    cout<<endl;
    cout<<sumaP<<endl;
    for(int i=1;i<=valor;i++){
        suma=sumaP+inicio;
        inicio=sumaP;
        sumaP = suma;
        cout<<suma<<endl;
    }
}