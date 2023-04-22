#include <stdio.h>
#include <math.h>

void lerCoordenadas(double *x, double *y) {
   printf("Digite as coordenadas (x, y): ");
   scanf("%lf %lf", x, y);
}

double calcularDistancia(double x1, double y1, double x2, double y2) {

   double dx = x2 - x1;
   double dy = y2 - y1;
   double distancia = sqrt(pow(dx,2) + pow(dy,2));
   
   return distancia;
}

int main() {
   double x1, y1, x2, y2, distancia;

   lerCoordenadas(&x1, &y1);
   lerCoordenadas(&x2, &y2);

   distancia = calcularDistancia(x1, y1, x2, y2);

   printf("A distância entre os pontos (%.2lf, %.2lf) e (%.2lf, %.2lf) é %.4lf.\n",
            x1, y1, x2, y2, distancia);

   return 0;
}


