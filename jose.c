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
