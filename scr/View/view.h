#ifndef VIEW_H
#define VIEW_H

#include "../Model/model.h"
using namespace std;

class Vista{
    public:
    void mostrarMenuPrincipal();
    void mostrarPoblacion(const Persona* poblacion, int tamaño);
    void mostrarMensaje(const string& mensaje);
    void getPersonaEntrada(string& nombre, int& edad);
    int getIndiceEntrada();
};

#endif // VIEW_H