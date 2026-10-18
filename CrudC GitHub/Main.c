#include "Main.h"
#include <stdio.h>

int main()
{
    int escolha;
    int continuar;

    Produto produtos[MAX_PRODUTOS];
    int totalProdutos = 0;

    do
    {
        printf("\n=== SISTEMA DE MERCADO ===\n");
        printf("1 - Adicionar\n");
        printf("2 - Remover\n");
        printf("3 - Listar\n");
        printf("4 - Atualizar\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            adicionarProduto(produtos, &totalProdutos);
            break;

        case 2:
            removerProduto(produtos, &totalProdutos);
            break;

        case 3:
            listarProdutos(produtos, totalProdutos);
            break;

        case 4:
            atualizarProduto(produtos, totalProdutos);
            break;

        default:
            printf("\n[Erro] Opcao invalida!\n");
            break;
        }

        printf("\nVocê deseja continuar?\n");
        printf("1 - Sim\n");
        printf("2 - Nao\n");
        scanf("%d", &continuar);

    } while (continuar == 1);

    return 0;
}