#include "Main.h"
#include <stdio.h>

void adicionarProduto(Produto produtos[], int *total)
{
    if (*total >= MAX_PRODUTOS)
    {
        printf("\n[Erro] O estoque está cheio!\n");
        return;
    }

    printf("\n--- Cadastrar Produto ---\n");
    printf("Digite o ID do produto: ");
    scanf("%d", &produtos[*total].ID);

    while (getchar() != '\n');

    printf("Digite o nome do produto: ");
    fgets(produtos[*total].nome, sizeof(produtos[*total].nome), stdin);

    printf("Digite o preco do produto: ");
    scanf("%lf", &produtos[*total].preco);

    printf("Digite a quantidade do produto: ");
    scanf("%d", &produtos[*total].quantidade);

    (*total)++;
    printf("\n[Sucesso] Produto cadastrado com sucesso!\n");
}

void listarProdutos(Produto produtos[], int total)
{
    if (total == 0)
    {
        printf("\n[Aviso] Nenhum produto cadastrado.\n");
        return;
    }

    printf("\n======= Lista de Produtos Cadastrados =======\n");
    for (int i = 0; i < total; i++)
    {
        printf("\nProduto %d", i + 1);
        printf("\nID: %d", produtos[i].ID);
        printf("\nNome: %s", produtos[i].nome);
        printf("Preco: R$ %.2lf", produtos[i].preco);
        printf("\nQuantidade: %d\n", produtos[i].quantidade);
        printf("-------------------------------------------\n");
    }
}

void atualizarProduto(Produto produtos[], int total)
{
    if (total == 0)
    {
        printf("\nNao existe produto para ser atualizado!\n");
    } else
    {
        int idBusca, encontrado = 0;
        printf("\n--- Atualizar Produto ---\n");
        printf("\nDigite o ID do produto: ");
        scanf("%d", &idBusca);

        for (int i = 0; i < total; i++)
        {
            if (idBusca == produtos[i].ID)
            {
                while (getchar() != '\n');

                printf("Digite o nome do produto: ");
                fgets(produtos[i].nome, sizeof(produtos[i].nome), stdin);

                printf("Digite o preço do produto: ");
                scanf("%lf", &produtos[i].preco);

                printf("Digite a quantidade do produto: ");
                scanf("%d", &produtos[i].quantidade);

                printf("\nProduto atualizados com sucesso!\n");
                encontrado = 1;
                break;
            }
        }

        if (!encontrado)
        {
            printf("\nNao foi possivel localizar produto com o ID %d", idBusca);
        }
    }
}

void removerProduto(Produto produtos[], int *total)
{
    if (*total == 0)
    {
        printf("Nao existe produto para ser removido!\n");
        return;
    } else
    {
        int idBusca, encontrado = 0;
        printf("\n--- Remover Produto ---\n");
        printf("\nDigite o ID do produto: ");
        scanf("%d", &idBusca);

        for (int i = 0; i < *total; i++)
        {
            if (produtos[i].ID == idBusca)
            {
                for (int j = i; j < *total - 1; j++)
                {
                    produtos[j] = produtos[j + 1];
                }
                (*total)--;
                encontrado = 1;
                printf("Produto removido!");
                break;
            }
        }
        if (!encontrado)
        {
            printf("\nNao foi possível localizar produto com o ID %d", idBusca);
        }

    }
}