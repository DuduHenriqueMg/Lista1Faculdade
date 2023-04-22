#include <stdio.h>

int lerNumero() {
    int num;

    do {
        printf("Digite um numero inteiro maior ou igual a zero: ");
        scanf("%d", &num);

        if (num < 0) {
            printf("O numero digitado e menor que zero. Digite novamente.\n");
        }
    } while (num < 0);

    return num;
}

int fibonacci(int num) {
    if (num == 0) {
        return 0;
    } else if (num == 1) {
        return 1;
    } else {
        int a = 0, b = 1, fib;

        for (int i = 2; i <= num; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }

        return b;
    }
}

int main() {
    int num = lerNumero();

    printf("O %do termo da sequencia de Fibonacci e %d\n", num, fibonacci(num));

    return 0;
}


