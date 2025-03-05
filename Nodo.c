#include <stdlib.h>
#include "Nodo.h"

// Crear un nuevo nodo
Nodo* crearNodo(DATO dato) {
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    if (nuevo != NULL) {
        nuevo->dato = dato;
        nuevo->siguiente = NULL;
    }
    return nuevo;
}

// Asignar dato a un nodo
void asignarDato(Nodo* nodo, DATO dato) {
    if (nodo != NULL) {
        nodo->dato = dato;
    }
}

// Obtener el dato de un nodo
DATO obtenerDato(Nodo* nodo) {
    return (nodo != NULL) ? nodo->dato : 0; // Asume 0 como valor nulo por defecto
}

// Asignar la referencia al siguiente nodo
void asignarReferencia(Nodo* nodo, Nodo* siguiente) {
    if (nodo != NULL) {
        nodo->siguiente = siguiente;
    }
}

// Obtener la referencia al siguiente nodo
Nodo* obtenerReferencia(Nodo* nodo) {
    return (nodo != NULL) ? nodo->siguiente : NULL;
}

// Borrar nodo (liberar memoria)
int borrarNodo(Nodo* nodo) {
    if (nodo != NULL) {
        free(nodo);
        return 1; // Éxito
    }
    return 0; // Fallo
}
