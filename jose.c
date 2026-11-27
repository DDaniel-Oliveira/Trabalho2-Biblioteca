//Daniel de Oliveira Silva
//Joao Pedro Teixeira
//Jose Victor Alpino Moreira
//Marcos Henrique Alves da Silva Sousa

#include <stdio.h>
#include <string.h>
#include "biblioteca.h"

/*operação 3*/

void listarLivros(Tlivro livros[], int totalLivros) {
	int i;
	
	printf("========== RELAÇÃO DE LIVROS ==========\n");
	
	if (totalLivros == 0){
	    printf("Nenhum livro cadastrado.\n");
	} else {
        for (i = 0; i< totalLivros; i++){
            printf("Titulo: %s\n", livros[i].titulo);
            printf("IBSN: %s\n", livros[i].isbn);
            printf("Área: %d\n", livros[i].area);
            printf("Quantidade total de cópias: %d\n", livros[i].qtdCopias);
            printf("Quantidade total emprestada: %d\n", livros[i].qtdEmprestada);
            printf("--------------------------------------\n");
        }
    }
}

/* operação 4*/

void buscarLivrosPorPrefixo(Tlivro livros[], int totalLivros) {
    char prefixo[50];
    char titulo[50];
    int i, j;
    int encontrado = 0;

    printf("\n========== BUSCAR LIVROS ==========\n");
    printf("Digite o prefixo do titulo: ");
    scanf(" %49[^\n]", prefixo);
    
    for (i = 0; prefixo[i] != '\0'; i++) {
        if (prefixo[i] >= 'A' && prefixo[i] <= 'Z') {
            prefixo[i] = prefixo[i] + 32;
        }
    }

    for (i = 0; i < totalLivros; i++) {

        for (j = 0; livros[i].titulo[j] != '\0'; j++) {
            titulo[j] = livros[i].titulo[j];

            if (titulo[j] >= 'A' && titulo[j] <= 'Z') {
                titulo[j] = titulo[j] + 32;
            }
        }

        titulo[j] = '\0';

        if (strncmp(titulo, prefixo, strlen(prefixo)) == 0) {
            encontrado = 1;

            printf("\nISBN: %s\n", livros[i].isbn);
            printf("Titulo: %s\n", livros[i].titulo);
            printf("Editora: %s\n", livros[i].editora);
            printf("Autor: %s\n", livros[i].autor);
            printf("Area: %d\n", livros[i].area);
            printf("Ano: %d\n", livros[i].ano);
            printf("Quantidade de copias: %d\n", livros[i].qtdCopias);
            printf("Quantidade emprestada: %d\n", livros[i].qtdEmprestada);
            printf("-----------------------------------\n");
        }
    }

    if (!encontrado) {
        printf("\nNenhum livro encontrado com esse prefixo.\n");
    }
}
