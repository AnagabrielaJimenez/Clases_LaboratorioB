#include <iostream>
#include "class_Persona.h"
using namespace std;

string Persona::getNombre() const{
    return nombre;
}

string Persona::getApellido() const{
    return apellido;
}

int Persona::getEdad() const{
    return edad;
}

void Persona::setNombre(const string nombre){
    this->nombre=nombre;
}

void Persona::setApellido(const string apellido){
    this->apellido=apellido;
}

void Persona::setEdad(const int edad){
    this->edad=edad;
}

int main(){
    Persona pers1("Juan", "Gonzáles", 35);
}