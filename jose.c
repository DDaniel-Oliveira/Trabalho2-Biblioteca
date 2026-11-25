/*opressão 3*/

void listarLivros(Tlivros livros[], int totalLivros) {
	int i;
	
	printf("\n========== RELAÇÃO DE LIVROS ==========\n");
	
	if (totalLivros == 0){
	 printf("Nenhum livro cadastrado.\n");
	
	return 0;
	
	}
	
	for (i = 0; i< totalLivros; i++){
		
		printf("\nIBSN: %s\n", livros[i].isbn);
	
		printf("\nTitulo: %s\n", livros[i].titulo);
	
		printf("\nÁrea: %s\n", livros[i].area);
	
		printf("\nQuantidade total de cópias: %d\n", livros[i].qtdCopias);
		
		printf("\nQuantidade total emprestada: %s\n", livros[i].qtdEmprestimos);
		
	}
	
}





/* opressão 4*/

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
            printf("Area: %s\n", livros[i].area);
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
