//
// Created by h.salvador.2023 on 19/04/2024.
//

#ifndef INC_19_04_PERSONA_H
#define INC_19_04_PERSONA_H
#include <iostream>
#define MAX 30

enum tipoContacto{
    FAVORITO, //0
    CONOCIDO, //1
    TRABAJO //2
};

//luego en el main.c ponemos persona nombreQueSea;
//Creamos la clase persona
class Persona {
    char nombre[MAX];
    char apellido[MAX];
    int edad;
    tipoContacto tipo;
};




#endif //INC_19_04_PERSONA_H
