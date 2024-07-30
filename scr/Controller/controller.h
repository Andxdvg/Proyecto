#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../Model/model.h"
#include "../View/view.h"

class Controlador{
private:
    Modelo modelo;
    Vista vista;

public:
    Controlador();
    void run();
    void createPersona();
    void readPoblacion();
    void updatePersona();
    void deletePersona();
};

#endif // CONTROLLER_H