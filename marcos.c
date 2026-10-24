//Daniel de Oliveira Silva
//João Pedro Teixeira
//José Victor Alpino Viado
//Marcos Henrique Alves da Silva Sousa

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include "biblioteca.h"


void cadastrar_livro(Tlivro livros[], int *totalLivros) {
    Tlivro novo;
    int i;

    printf("\n----------- CADASTRO DE LIVRO -----------\n");

    /* Verifica se ha espaco no vetor */
    if (*totalLivros >= 100) {
        printf("ERRO: quantidade maxima de livros atingida!\n");
        return;
    }

    /* Le e valida o ISBN */
    if (!ler_isbn(novo.isbn)) {
        return;
    }

    /* Verifica se o ISBN ja existe */
    for (i = 0; i < *totalLivros; i++) {
        if (strcmp(livros[i].isbn, novo.isbn) == 0) {
            printf("Erro: este ISBN ja esta cadastrado!\n");
            printf("Livro existente: %s\n", livros[i].titulo);
            return;
        }
    }

    /* Le os demais dados */
    printf("Titulo: ");
    scanf(" %49[^\n]", novo.titulo);

    printf("Editora: ");
    scanf(" %49[^\n]", novo.editora);

    printf("Autor: ");
    scanf(" %49[^\n]", novo.autor);

    printf("Area: ");
    scanf(" %29[^\n]", novo.area);

    printf("Ano de publicacao: ");
    if (scanf("%d", &novo.ano) != 1) {
        printf("Erro: ano invalido.\n");
        limpaBuffer();
        return;
    }

    printf("Quantidade de copias: ");
    if (scanf("%d", &novo.qtdCopias) != 1 ||
        novo.qtdCopias < 1) {
        printf("Erro: quantidade de copias invalida.\n");
        limpaBuffer();
        return;
    }

    /* Inicializa a quantidade de emprestimos */
    novo.qtdEmprestada = 0;

    /* Armazena o livro e atualiza o contador */
    livros[*totalLivros] = novo;
    (*totalLivros)++;

    printf("\nLivro cadastrado com sucesso!\n");
}


int ler_isbn(char isbn[14]) {
    char entrada[100];
    int i;
    int c;

    while (1) {
        printf("Digite o ISBN (13 digitos): ");

        if (fgets(entrada, sizeof(entrada), stdin) == NULL) {
            return 0;
        }

        /* Verifica se a entrada terminou com Enter */
        if (strchr(entrada, '\n') == NULL && !feof(stdin)) {
            while ((c = getchar()) != '\n' && c != EOF) {
                /* descarta o restante da linha */
            }

            printf("Erro: entrada muito longa.\n");
            continue;
        }

        entrada[strcspn(entrada, "\n")] = '\0';

        if (strlen(entrada) != 13) {
            printf("Erro: o ISBN deve ter exatamente 13 digitos.\n");
            continue;
        }

        for (i = 0; i < 13; i++) {
            if (!isdigit((unsigned char)entrada[i])) {
                break;
            }
        }

        if (i != 13) {
            printf("Erro: digite somente numeros.\n");
            continue;
        }

        strcpy(isbn, entrada);
        return 1;
    }
}
