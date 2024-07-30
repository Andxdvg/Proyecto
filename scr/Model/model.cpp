#include "../Model/model.h"
#include <iostream>
#include <cstring>

using namespace std;

Modelo::Modelo() : capacidad(2), tamaño(0) {
    poblacion = new Persona[capacidad];
}

Modelo::~Modelo(){
    delete[] poblacion;
}

void Modelo::addPersona(const string& nombre, int edad){
    if(tamaño>=capacidad){
        capacidad *=2;
        Persona* newPoblacion=new Persona[capacidad];
        memcpy(newPoblacion, poblacion, tamaño * sizeof(Persona));
        delete[] poblacion;
        poblacion=newPoblacion;
    }
    poblacion[tamaño].nombre=nombre;
    poblacion[tamaño].edad=edad;
    tamaño++;
}

void Modelo::deletePersona(int indice){
    if(indice<0||indice>=tamaño)return;
    for(int i=indice; i<tamaño-1; i++){
        poblacion[i]=poblacion[i+1];
    }
    tamaño--;
}

void Modelo::updatePersona(int indice, const string& nombre, int edad){
    if(indice<0||indice>=tamaño) return;
    poblacion[indice].nombre=nombre;
    poblacion[indice].edad=edad;
}

Persona* Modelo::getPoblacion(){
    return poblacion;
}

int Modelo::getTamaño(){
    return tamaño;
}