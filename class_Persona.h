#include <iostream>

using namespace std;

class Persona{
private:
    //Variables miembro
    string nombre;
    string apellido;
    int edad;
public:
    //Constructor por defecto
    Persona(){
        nombre="o";
        apellido="o";
        edad=0;
    }
    //Constructor que recive argumentos 
    Persona(string nombre, string apellido, int edad){
        this->nombre=nombre;
        this->apellido=apellido;
        this->edad=edad;
    }
    //Funciones get (obtener)
    string getNombre() const;
    string getApellido() const; 
    int getEdad() const;
    //Funciones set (modificar)
    void setNombre(const string nombre);
    void setApellido(const string apellido);
    void setEdad(const int edad);
};