#include <stdio.h>
#include "Nodo.h"

int main() {
    Nodo* nodo1 = crearNodo(10); // Crea un nodo con valor 10
    Nodo* nodo2 = crearNodo(20); // Crea otro nodo con valor 20

    // Asigna el siguiente nodo
    asignarReferencia(nodo1, nodo2);

    // Muestra los datos
    printf("Nodo 1 dato: %d\n", obtenerDato(nodo1));
    printf("Nodo 2 dato: %d\n", obtenerDato(nodo2));

    // Libera la memoria
    borrarNodo(nodo1);
    borrarNodo(nodo2);

    return 0;
}

