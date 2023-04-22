#include <stdio.h>

#define PRECO_ABACAXI 5.0
#define PRECO_MACA 1.0
#define PRECO_PERA 4.0

void exibirMenu() {
    printf("Escolha a fruta:\n");
    printf("1 - Abacaxi (R$%.2f)\n", PRECO_ABACAXI);
    printf("2 - Maça (R$%.2f)\n", PRECO_MACA);
    printf("3 - Pera (R$%.2f)\n\n", PRECO_PERA);
    printf("Para finalizar digite -1\n\n");
}

int main() {
    int opcao;
    int quantidade;
    float total = 0.0;

    do {
        exibirMenu();

        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 3) {
            
            printf("Quantidade: ");
            scanf("%d", &quantidade);

            switch (opcao) {
                case 1:
                    total += quantidade * PRECO_ABACAXI;
                    break;
                case 2:
                    total += quantidade * PRECO_MACA;
                    break;
                case 3:
                    total += quantidade * PRECO_PERA;
                    break;
            }
        } else if (opcao != -1) {
            printf("Opção inválida!\n");
        }

        printf("\n");
    } while (opcao != -1);

    printf("Valor total da compra: R$%.2f\n", total);

    return 0;
}

