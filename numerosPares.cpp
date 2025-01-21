#include<iostream>
using namespace std;

int main(){
    int limite;
    cout<<"Digite el limite de los numeros pares: ";
    cin>>limite;
    for(int i=2;i<=limite;i+=1){
        if(i%2==0){
            cout<<i;
            if(i<limite-1){
                cout<<", ";
            }
        }
    }
}