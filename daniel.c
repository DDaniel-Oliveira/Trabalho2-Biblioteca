#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

void end(void){
    system("pause");
    system("cls");
}

void limpaBuffer(void){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

void cadAreas(Tarea a[]){
    int i;
    for (i=0; i<10; i++){
        printf("Área %d\nNome: ", i+1);
        scanf(" %30[^\n]s", a[i].nome);
        a[i].codigo = i;
    }
    system("cls");
}

void exibirAreas(Tarea a[]){
    int i;
    for (i=0;i<10;i++){
        printf("Area: %s\t| Código: %d\n", a[i].nome, a[i].codigo);
    }
}