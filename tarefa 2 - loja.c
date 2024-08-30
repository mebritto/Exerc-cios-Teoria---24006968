#include <stdio.h>
#include <string.h>

int main() {
    char nomeProduto[50];
    int quantidade;
    float precoUnitario, valorTotal, valorTotalDia = 0;

    do {
        printf("\nDigite o nome do produto (ou 'fim' para finalizar): ");
        fgets(nomeProduto, 50, stdin);
        nomeProduto[strcspn(nomeProduto, "\n")] = 0; // Remove a nova linha

        if (strcmp(nomeProduto, "fim") == 0) {
            break;
        }


        printf("\nDigite a quantidade vendida: ");
        scanf("%d", &quantidade);

        printf("\nDigite o preço unitário: ");
        scanf("%f", &precoUnitario);

        valorTotal = quantidade * precoUnitario;
        valorTotalDia += valorTotal;

        printf("\nValor total da venda: R$ %.2f\n", valorTotal);
        break;

    } while (1);

    printf("\nValor total arrecadado no dia: R$ %.2f\n", valorTotalDia);

    return 0;
}
