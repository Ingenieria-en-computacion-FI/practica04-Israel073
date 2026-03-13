#include <stdio.h>
#include "nodo.h"

int main() {
    printf("===== Repo de ejercicios de nodos =====\n");
        Nodo* n1 = crearNodo(10);
    if (n1) printf("Nodo creado con dato: %d\n", n1->dato);

    
    Nodo* arreglo = crearArregloNodos(5);
    printf("Arreglo inicial:\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", arreglo[i].dato);
    }
    printf("\n");
    
    int tam = 5;
    arreglo = agregarNodo(arreglo, &tam, 99);
    
    printf("Arreglo actualizado:\n");
    for(int i = 0; i < tam; i++){
        printf("%d ", arreglo[i].dato);
    }
    printf("\n");
    liberarNodos(arreglo, tam);
    liberarNodos(n1, 1);

    Nodo* inicio = construirTresNodos();
    printf("Lista de nodos:\n");
    Nodo* actual = inicio;
    while(actual != NULL){
        printf("%d ", actual->dato);
        actual = actual->siguiente;
    }
    printf("\n");

   int total = contarNodos(inicio);
    printf("Total de nodos: %d\n", total);

    Nodo* desdeEntrada = crearNodosPorEntrada();
    printf("Nodos desde entrada:\n");
    actual = desdeEntrada;
    while(actual != NULL){
        printf("%d ", actual->dato);
        actual = actual->siguiente;
    }
    printf("\n");
    return 0;
}
