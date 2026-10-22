//Daniel de Oliveira Silva
//João Pedro Teixeira
//José Victor Alpino Viado
//Marcos Henrique Alves da Silva Sousa

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "prototipos.h"

void realizarEmprestimo(Livro livros[], int totalLivros) {
    char isbnBusca[20];
    int encontrado = 0;

    printf("\n--- REALIZAR EMPRÉSTIMO ---\n");
    printf("Digite o ISBN do livro: ");
    scanf("%s", isbnBusca);

    for (int i = 0; i < totalLivros; i++) {
        if (strcmp(livros[i].isbn, isbnBusca) == 0) {
            encontrado = 1;
          
            int disponiveis = livros[i].qtdCopias - livros[i].qtdEmprestada;
            printf("\nTítulo do livro: %s\n", livros[i].titulo);
            printf("Cópias disponíveis para empréstimo: %d\n", disponiveis);

            if (livros[i].qtdEmprestada < (livros[i].qtdCopias - 1)) {
                livros[i].qtdEmprestada++;
                printf("\n=> SUCESSO: Empréstimo realizado com confirmação!\n");
            } else {
                printf("\n=> ERRO: Empréstimo não permitido. A última cópia deve permanecer na biblioteca.\n");
            }
            break;
        }
    }

    if (!encontrado) {
        printf("\n=> ERRO: Livro com ISBN %s não foi encontrado no sistema.\n", isbnBusca);
    }
}

