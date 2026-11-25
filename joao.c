//Daniel de Oliveira Silva
//Joao Pedro Teixeira
//Jose Victor Alpino Moreira
//Marcos Henrique Alves da Silva Sousa

#include <stdio.h>
#include <string.h>
#include "biblioteca.h"

int localizarLivroPorISBN(Tlivro livros[], int totalLivros, char isbn[]) { //func auxiliar pra emprestimo e devolucao ;)
    int i;
    for (i = 0; i < totalLivros; i++) {
        if (strcmp(livros[i].isbn, isbn) == 0) {//aqui compara as duas strings caracter por caracter e se o resultado for 0 e pq sao iguais
            return i;
        }
    }
    return -1;
}


//emprestimo de livros (operacao 5)
void realizarEmprestimo(Tlivro livros[], int totalLivros) {
    char isbn[14];
    int posicao;
    int disponiveis;

    if (totalLivros == 0) {
        printf("Nao tem livros cadastrados.\n");
        return;
    }

    printf("Digite o ISBN do livro: ");
    scanf("%13s", isbn);

    posicao = localizarLivroPorISBN(livros, totalLivros, isbn);

    if (posicao == -1) {
        printf("Livro nao encontrado.\n");
        return;
    }

    disponiveis = livros[posicao].qtdCopias - livros[posicao].qtdEmprestada;

    printf("\nLivro encontrado.\n");
    printf("Titulo: %s\n", livros[posicao].titulo);
    printf("Copias disponiveis: %d\n", disponiveis);

    if (livros[posicao].qtdEmprestada < livros[posicao].qtdCopias - 1) {//ve se a quant. de copias que querem pegar emprestado n e maior que a quantidade de copias em estoque
        livros[posicao].qtdEmprestada++;
        printf("\nEmprestimo realizado.\n");

        printf("Quantidade de copias emprestadas: %d\n", livros[posicao].qtdEmprestada);
    }
    else {
        printf("\nEmprestimo nao permitido. E necessario manter pelo menos 1 copia disponivel no armazem.\n");
    }
}


//devolucao de livros (operacao 6)
void realizarDevolucao(Tlivro livros[], int totalLivros) {
    char isbn[14];
    int posicao;

    if (totalLivros == 0) {
        printf("Nao existem livros cadastrados.\n");
        return;
    }

    printf("Digite o ISBN do livro: ");
    scanf("%13s", isbn);

    posicao = localizarLivroPorISBN(livros, totalLivros, isbn);

    if (posicao == -1) {
        printf("Livro nao encontrado.\n");
        return;

    }

    printf("\nLivro encontrado.\n");
    printf("Titulo: %s\n", livros[posicao].titulo);

    if (livros[posicao].qtdEmprestada > 0) {//se nenhuma copia foi emprestada nao tem como realizar uma devolução

        livros[posicao].qtdEmprestada--;

        printf("\nDevolucao realizada.\n");

        printf("Quantidade de copias emprestadas: %d\n",
               livros[posicao].qtdEmprestada);
    }
    else {
        printf("\nNao tem copias emprestadas deste livro para devolver.\n");
    }

}
