//Daniel de Oliveira Silva
//João Pedro Teixeira
//José Victor Alpino Viado
//Marcos Henrique Alves da Silva Sousa

#include <stdio.h>
#include "marcos.c"
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_CTYPE, "");
    int escolha;

    do{
        printf("---------------- SISTEMA DE BIBLIOTECA ----------------\n"
        "0 - SAIR DA APLICAÇÃO"
        "1 - ");

        
    } while(escolha != 0);
    return 0;
}
