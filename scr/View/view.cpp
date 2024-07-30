#include "../View/view.h"
#include <iostream>

using namespace std;

void Vista::mostrarMenuPrincipal(){
    cout<<"1. Agregar Persona."<<endl;
    cout<<"2. Lista Persona."<<endl;
    cout<<"3. Modificar Persona."<<endl;;
    cout<<"4. Borrar Persona"<<endl;;
    cout<<"5. Salir"<<endl;;
}

void Vista::mostrarPoblacion(const Persona* poblacion, int tamaño){
    cout<<"Poblacion Lista"<<endl<<endl;
    for(int i=0; i<tamaño; i++){
        cout<<i+1<<". "<<poblacion[i].nombre<<" - "<<poblacion[i].edad<<" anos de edad. "<<endl;
        cout<<endl;
    }
}

void Vista::mostrarMensaje(const string& mensaje){
    cout<<mensaje<<endl;
}

void Vista::getPersonaEntrada(string& name, int& edad){
    cout<<"Insertar nombre: ";
    getline(cin, name);
    cout<<"Insertar edad: ";
    cin>>edad;
    cin.ignore(); 
}

int Vista::getIndiceEntrada(){
    int indice;
    cout<<"Inserte el indice (basado en 1): ";
    cin>>indice;
    cin.ignore(); 
    return indice-1;
}