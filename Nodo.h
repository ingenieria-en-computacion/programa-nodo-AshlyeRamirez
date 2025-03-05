#ifndef NODO_H
#define NODO_H

// Definición del tipo de dato que almacenará el nodo
typedef int DATO;

// Estructura del nodo
typedef struct Nodo {
    DATO dato;
    struct Nodo* siguiente;
} Nodo;

// Prototipos de funciones
Nodo* crearNodo(DATO dato);
void asignarDato(Nodo* nodo, DATO dato);
DATO obtenerDato(Nodo* nodo);
void asignarReferencia(Nodo* nodo, Nodo* siguiente);
Nodo* obtenerReferencia(Nodo* nodo);
int borrarNodo(Nodo* nodo);

#endif
