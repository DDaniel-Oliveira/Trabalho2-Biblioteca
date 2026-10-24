//Daniel de Oliveira Silva
//João Pedro Teixeira
//José Victor Alpino Viado
//Marcos Henrique Alves da Silva Sousa

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "biblioteca.h"



int main(){
    setlocale(LC_ALL, ".UTF-8");
    int escolha, t;
    Tlivro livros[100];
    int totalLivros = 0;
    Tarea Areas[10];

    cadAreas(Areas);

    do{
        printf("---------------- SISTEMA DE BIBLIOTECA ----------------\n"
        "0 - SAIR DA APLICAÇÃO\n"
        "1 - EXIBIR AREAS\n"
        "2 - INSERIR LIVRO\n"
        "3 - EXIBIR RELAÇÃO DE LIVRO\n"
        "4 - BUSCAR LIVROS POR PREFIXO DE TEXTO\n"
        "5 - REALIZAR EMPRÉSTIMO\n"
        "6 - REALIZAR DEVOLUÇÃO\n"
        "7 - EXIBIR LIVROS EMPRESTADOS DE UMA DETERMINADA ÁREA\n"
        "8 - EXIBIR LIVROS EMPRESTADOS POR ÁREA\n");
        do{
            printf("Escolha: ");
            t = scanf("%d", &escolha);
            if (t != 1){
                printf("Entrada Inválida, digite um número.\n");
                limpaBuffer();
            }
        }while(t != 1);
        printf("-------------------------------------------------------\n");
        switch (escolha){
            case 1:
                exibirAreas(Areas);
                end();
                break;
            case 2:
                system("cls");
                limpaBuffer();
                cadastrar_livro(livros, &totalLivros);
                end();
                break;
            case 0:
                break;
            default:
                printf("Não implementado.\n");
                end();
        }
        
    } while(escolha != 0);
    return 0;
}