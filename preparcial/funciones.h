#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>


typedef struct
{

     int id;
     char nombre[10];
     int estado;

}emascota;

int vM(int minimo, int maximo);

char vRta(char resp);

void inicio(emascota m[]);

int espaciolibre(emascota m[]);

void alta(emascota m[]);

int buscarMascota(emascota m[], int );
void mostrarMascota(emascota m[]);
void baja(emascota m[]);

 void modificar(emascota m[]);
/*void lista(iper people[]);

void cEdad(iper people[]);

void grafico(iper people[]);*/


#endif // FUNCIONES_H_INCLUDED


