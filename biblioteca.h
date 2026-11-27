typedef struct Livro{
    char isbn[14];
    char titulo[50];
    char editora[50];
    char autor[50];
    int area;
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
void realizarEmprestimo(Tlivro livros[], int totalLivros); //operacao 5
void realizarDevolucao(Tlivro livros[], int totalLivros); //operacao 6

//FUNÇÕES DO MARCOS
int ler_isbn(char isbn[14]);
int escolher_area(Tarea Areas[], int totalAreas, int *areaEscolhida);
void cadastrar_livro(Tlivro livros[], int *totalLivros, Tarea Areas[], int totalAreas);  //operacao 2
void livrosEmprestados(Tlivro livros[], int qtdLivros, Tarea areas[], int totalAreas); //operacao 8

//FUNÇÕES DO JOSÉ
void listarLivros(Tlivro livros[], int totalLivros); //operacao 3
void buscarLivrosPorPrefixo(Tlivro livros[], int totalLivros); //operacao 4

//FUNÇÕES DO DANIEL
void end(void);
void cadAreas(Tarea a[]);
void limpaBuffer(void);
void exibirAreas(Tarea a[]); //operacao 1
void livrosEmprestadosArea(Tlivro livros[], Tarea areas[], int qtd); //operacao 7
