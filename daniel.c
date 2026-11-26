#include <stdio.h>
#include <string.h>
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

void livrosEmprestadosArea(Tlivro livros[], Tarea areas[], int qtd){
    int codArea, i, total = 0;

    printf("Digite o código da área (0 a 9).\n");
    do{
        i = scanf("%d", &codArea);
        if (i!=1 || codArea > 9 || codArea < 0){
            printf("Codigo invalido. Digite um número de 0 a 9.\n");
            limpaBuffer();
        }
    } while (i!=1 || codArea > 9 || codArea < 0);
    
    printf("Area escolhida: %s\n", areas[codArea].nome);

    for(i=0;i<qtd;i++){
        if (livros[i].area == codArea && livros[i].qtdEmprestada != 0){
            printf("\nTitulo: %s\nISBN: %s\nQuantidade de Emprestimos: %d\n----------------\n", 
                livros[i].titulo, livros[i].isbn, livros[i].qtdEmprestada);
            total += livros[i].qtdEmprestada;
        }
    }
     printf("Quantidade total de emprestimos nessa área: %d\n", total);
    
}