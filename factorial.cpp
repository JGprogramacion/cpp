#include<iostream>
using namespace std;

int main(){
    int valor;
    int factorial = 1;
    cin>>valor;

    for(int i=1; i<=valor;i++){
        factorial = i*factorial;
    }
           cout<<factorial;
}