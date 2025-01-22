#include<iostream>
#include <limits> // Asegúrate de incluir esta biblioteca
using namespace std;

int main(){
    char respuesta;

    while(true){
        cout<<"Desea salir del menu? ";
        cin>>respuesta;
        
        //Limpieza del buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if(respuesta=='y'){
            cout<<"bye";
            break;
        }
    }
    return 0;
}