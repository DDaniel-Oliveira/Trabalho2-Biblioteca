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
    printf("Cadastre as 10 áreas da biblioteca.\n");
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
        printf("Área: %s\t| Código: %d\n", a[i].nome, a[i].codigo);
    }
}

void emprestimo(Tarea *a[], int *total){
    if (*total == 0){
        printf("Não existem livros cadastrados.");
        return;
    }
    char emprestimo[14];
    int temp;
}