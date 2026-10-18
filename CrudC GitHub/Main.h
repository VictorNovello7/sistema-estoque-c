#ifndef CRUDC_MAIN_H
#define CRUDC_MAIN_H

#define MAX_PRODUTOS 100

typedef struct {
    int ID;
    char nome[50];
    double preco;
    int quantidade;
} Produto;

void adicionarProduto(Produto produtos[], int *total);
void listarProdutos(Produto produtos[], int total);
void atualizarProduto(Produto produtos[], int total);
void removerProduto(Produto produtos[], int *total);

#endif //CRUDC_MAIN_H