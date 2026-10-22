//Daniel de Oliveira Silva
//João Pedro Teixeira
//José Victor Alpino Viado
//Marcos Henrique Alves da Silva Sousa

#include <stdio.h>
#include "marcos.c"
#include "joao.c"
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_CTYPE, "");
    int escolha;
    Tlivro livros[100];
    Tarea Areas[10];

    do{
        printf("---------------- SISTEMA DE BIBLIOTECA ----------------\n"
        "0 - SAIR DA APLICAÇÃO"
        "1 - EXIBIR AREAS\n"
        "2 - INSERIR LIVRO\n"
        "3 - EXIBIR RELAÇÃO DE LIVRO\n"
        "4 - BUSCAR LIVROS POR PREFIXO DE TEXTO\n"
        "5 - REALIZAR EMPRÉSTIMO\n"
        "6 - REALIZAR DEVOLUÇÃO\n"
        "7 - EXIBIR LIVROS EMPRESTADOS DE UMA DETERMINADA ÁREA\n"
        "8 - EXIBIR LIVROS EMPRESTADOS POR ÁREA\n"
        "Escolha: ");
        scanf("%d", &escolha);
        
        switch (escolha)
            default:
                printf("Não implementado.\n");
        
    } while(escolha != 0);
    return 0;
}
