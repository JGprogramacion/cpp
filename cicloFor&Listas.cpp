#include<iostream>
using namespace std;

int main(){
    int lista[]= {2,4,6,8,10};
    int limite = sizeof(lista)/sizeof(lista[0]);

    for(int i=0;i<limite;i+=1){
        cout<<lista[i];
        if(i<limite-1){
            cout<<",";
        }
        if(lista[i]==6){
            break;
        }
    }
}