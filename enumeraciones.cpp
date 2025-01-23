#include<iostream>
using namespace std;

int main(){
    enum dias_semana{lunes, martes, miercoles};

    dias_semana dia = martes;

    //Visualización de un representacion numerica de una lista ordenada. Como un array.
    cout<<dia<<endl;

    enum dias_semana_dos {lunesUno='l', martesUno='m', miercolesUno='w'};
    dias_semana_dos diaDos = miercolesUno;
    //Visualización de un represnetacion donde se asigna una letra al nombre de la enumeracion.
    cout<<(char)diaDos;
}