#include<iostream>
#include<string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

int main(){
    Persona p =Persona();
    p.nombre = "Jonathan";
    p.edad = 29;
    cout<<p.nombre<<" "<<p.edad;

//Variable tipo persona con puntero.
    Persona *p1 = new Persona();
    p1->nombre = "David";
    p1->edad = 30;
    cout<<endl<<p1->nombre<<endl;

    cout<<&p<<endl;
    cout<<&p1<<endl;
    cout<<sizeof(&p1);
}