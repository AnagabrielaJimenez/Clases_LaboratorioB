#include <iostream>
#include "class_Persona.h"
#include "class_ArregloDePersonas.h"

using namespace std;
 
void ArregloDePersonas::reordenamiento(int n){
    Persona *aux= new Persona[n];
    for (int i = 0; i < n; i++){
        aux[i]=personas[i];
    }
    delete[] personas;
    personas=aux;
}
void ArregloDePersonas::push_back(const Persona &p){
    tam++;
    reordenamiento(tam);
    personas[tam-1]=p;
}
void ArregloDePersonas::insert(const int posicion, const Persona &p){
    personas[posicion]=p;
}
void ArregloDePersonas::remove(const int pos){
    Persona *aux= new Persona[tam-1];
    for (int i = 0; i < pos; i++){
        aux[i]=personas[i];
    }
    for (int i = pos+1; i < tam; i++){
        aux[i-1]=personas[i];
    }
    delete[] personas;
    personas=aux;
}
const int ArregloDePersonas::getSize() const{
    return tam;
}
    
void ArregloDePersonas::clear(){
    Persona *aux= new Persona[tam];
    delete[]personas;
    personas=aux;
}

int main(){
    Persona pers1[5];
}