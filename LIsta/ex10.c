#include <stdio.h>

double calculaMedia(int numeros[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    return (float)soma / tamanho;
}

int main() {
    int numeros[10];
    
    for (int i = 0; i < 10; i++) {
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &numeros[i]);
    }
    float media = calculaMedia(numeros, 10);
    printf("A media dos numeros digitados e: %.2lf\n", media);

    return 0;
}

