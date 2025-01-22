#include<iostream>
using namespace std;

int suma(int a, int b){
    return a + b;
}

int multiplicacion(int a, int b =2){
    return a*b;
}
int main(){
    cout<<"El resultado de la suma: "<<suma(12,2)<<endl;
    cout<<"El resultado de la multiplicacion es: "<<multiplicacion(350);
}