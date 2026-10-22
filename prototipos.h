typedef struct Livro{
    int isbn;
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