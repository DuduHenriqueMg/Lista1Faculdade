#include <stdio.h>

#include <stdio.h>

int main() {

    int num, menor, maior;

    maior = num;
    menor = num;

    do{
        printf("Digite o numero ");
        scanf("%d", &num);

        if (num>maior){
            maior = num;
        }
        if (num<menor){
            menor = num;
        }
        
    }while(num>=0);
    
    printf("O maior numero digitado foi %d e o menor foi %d\n", maior, menor);

    return 0;
}