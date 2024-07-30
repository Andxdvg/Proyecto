#include "../Controller/controller.h"
#include <iostream>

Controlador::Controlador() : modelo(), vista() {}

void Controlador::run() {
    int opcion;
    do{
        vista.mostrarMenuPrincipal();
        cout<<"Escoja una opcion: ";
        cin>>opcion;
        cin.ignore();

        switch (opcion){
            case 1: createPersona();
            break;
            case 2: readPoblacion();
            break;
            case 3: updatePersona();
            break;
            case 4: deletePersona();
            break;
            case 5: vista.mostrarMensaje("Saliendo...");
            break;
            default: vista.mostrarMensaje("Opcion invalida, por favor intente de nuevo.");
            break;
        }
    }while (opcion !=5);
}

void Controlador::createPersona() {
    string nombre;
    int edad;
    vista.getPersonaEntrada(nombre, edad);
    modelo.addPersona(nombre, edad);
    vista.mostrarMensaje("Persona anadida correctamente.");
    cout<<endl;
}

void Controlador::readPoblacion(){
    Persona* poblacion = modelo.getPoblacion();
    int tamaño = modelo.getTamaño();
    vista.mostrarPoblacion(poblacion, tamaño);
}

void Controlador::updatePersona(){
    readPoblacion();
    int indice = vista.getIndiceEntrada();
    string nombre;
    int edad;
    vista.getPersonaEntrada(nombre, edad);
    modelo.updatePersona(indice, nombre, edad);
    vista.mostrarMensaje("Persona modificada correctamente.");
    cout<<endl;
}

void Controlador::deletePersona(){
    readPoblacion();
    int indice = vista.getIndiceEntrada();
    modelo.deletePersona(indice);
    vista.mostrarMensaje("Persona eliminada correctamente.");
    cout<<endl;
}