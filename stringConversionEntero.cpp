#include<iostream>
using namespace std;

int main(){
    string texto = "hola";
    string textoDos = "10";
    string textoTres = "15.4";

    cout<<texto<<endl;
    cout<<texto.size()<<endl;
    //String to int -- >Recibe cadena de texto que contiene un numero.
    cout<<stoi(textoDos)<<endl;
    //String to float
    cout<<stof(textoTres)+2;
}