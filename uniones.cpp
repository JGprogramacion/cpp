#include<iostream>
using namespace std;

int main(){
    union numero_letra {
        int numero;
        char letra;
    };

    numero_letra x = {'A'};
    
    cout<<"X como numero: "<<x.numero<<endl;
    cout<<"X como letra: "<<x.letra<<endl;
    //Conversion de char a int & viceversa

    cout<<"X numero cambio a letra: "<<(char)x.numero<<endl;
    cout<<"X letra cambio a numero: "<<(int)x.letra;
}