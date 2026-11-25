typedef struct Livro{
    char isbn[14];
    char titulo[50];
    char editora[50];
    char autor[50];
    char area[30];
    int ano;
    int qtdCopias;
    int qtdEmprestada;
} Tlivro;

typedef struct Area{
    int codigo;
    char nome[31];
} Tarea;

//FUNÇÕES DO JOÃO
int localizarLivroPorISBN(Tlivro livros[], int totalLivros, char isbn[]);
void realizarEmprestimo(Tlivro livros[], int totalLivros);
void realizarDevolucao(Tlivro livros[], int totalLivros);

//FUNÇÕES DO MARCOS
int ler_isbn(char isbn[14]);
int escolher_area(Tarea Areas[], int totalAreas, char areaEscolhida[]);
void cadastrar_livro(Tlivro livros[], int *totalLivros, Tarea Areas[], int totalAreas); 

//FUNÇÕES DO JOSÉ
void listarLivros(Tlivros livros[], int totalLivros);
void buscarLivrosPorPrefixo(Tlivro livros[], int totalLivros);

//FUNÇÕES DO DANIEL
void end(void);
void cadAreas(Tarea a[]);
void limpaBuffer(void);
void exibirAreas(Tarea a[]);
void emprestimo(Tarea *a[], int *total);
