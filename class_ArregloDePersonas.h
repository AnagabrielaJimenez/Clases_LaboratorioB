#include <iostream>
#include "class_Persona.h"

using namespace std;

class ArregloDePersonas
{
public:
    //Variables miembro
    Persona* personas;
    int tam;
    //Constructor para inicializar el arreglo
    ArregloDePersonas(const Persona personas[], const int tam){
        this->personas= new Persona[tam];
        for( int i=0; i<tam; i++){
            this->personas[i]=personas[i];
        }
        this->tam=tam;
    }
    //Constructor copia
    ArregloDePersonas(const ArregloDePersonas &o){
        personas= new Persona[o.tam];
        this->tam=o.tam;
        for (int i = 0; i < tam; i++){
            personas[i]=o.personas[i];
        }
    }
    //Destructor
    ~ArregloDePersonas(){
        delete[] personas;
    }
    //Función reordenamiento 
    void reordenamiento(int n);
    //Función para insertar Persona
    void insert(const int posicion, const Persona &p);
    //Función Agregar Persona
    void push_back(const Persona &p);
    //Función eliminar Persona
    void remove(const int pos);
    //Función para el tamaño del arreglo 
    const int getSize() const;
    //Función eliminar todos los elementos del arreglo
    void clear();
};

         
