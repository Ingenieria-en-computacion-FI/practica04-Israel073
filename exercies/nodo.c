#include "nodo.h"
#include <stdio.h>
#include <stdlib.h>


Nodo* crearNodo(int valor){
    Nodo* n = malloc(sizeof(Nodo));
    if(!n) return NULL;
    n->dato = valor;
    n->siguiente = NULL;
    return n;
}

Nodo* crearArregloNodos(int n){
    Nodo* a = calloc(n, sizeof(Nodo));
    if(!a) return NULL;
    for(int i=0;i<n;i++) a[i].dato = i;
    return a;
}


Nodo* agregarNodo(Nodo* arreglo, int* n, int valor){
    Nodo* t = realloc(arreglo, (*n + 1) * sizeof(Nodo));
    if(!t) return arreglo;
    arreglo = t;
    arreglo[*n].dato = valor;
    arreglo[*n].siguiente = NULL;
    (*n)++;
    return arreglo;
}


void liberarNodos(Nodo* arreglo, int n){
    free(arreglo);
}

do* construirTresNodos(){
    Nodo* a = crearNodo(10);
    Nodo* b = crearNodo(20);
    Nodo* c = crearNodo(30);
    a->siguiente = b;
    b->siguiente = c;
    return a;
}


int contarNodos(Nodo* inicio){
    int c = 0;
    while(inicio){
        c++;
        inicio = inicio->siguiente;
    }
    return c;
}


Nodo* crearNodosPorEntrada(){
    int v;
    Nodo *inicio=NULL, *act=NULL;

    while(scanf("%d",&v)==1 && v!=-1){
        Nodo* n = crearNodo(v);
        if(!inicio) inicio = act = n;
        else{ act->siguiente = n; act = n; }
    }
    return inicio;
}
