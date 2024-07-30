#ifndef MODEL_H
#define MODEL_H

#include <string>

using namespace std;

struct Persona {
    string nombre;
    int edad;
};

class Modelo{
private:
    Persona* poblacion;
    int capacidad;
    int tamaño;

public:
    Modelo();
    ~Modelo();

    void addPersona(const string& nombre, int edad);
    void deletePersona(int indice);
    void updatePersona(int indice, const string& nombre, int edad);
    Persona* getPoblacion();
    int getTamaño();
};

#endif // MODEL_H