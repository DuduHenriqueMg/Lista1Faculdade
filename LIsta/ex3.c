#include <stdio.h>
#define PI 3.14159 

int main() {
    
   float raio, area, volume;
   printf("Digite o raio da esfera: ");
   scanf("%f", &raio);

   area = 4 * PI * raio * raio;
   volume = (4.0/3) * PI * raio * raio * raio;

   printf("A área da esfera é: %.2f\n", area); 
   printf("O volume da esfera é: %.2f\n", volume); 

   return 0;
} 