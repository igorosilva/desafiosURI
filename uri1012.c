#include <stdio.h>
#include <math.h>
 
int main() {
 
    double A, B, C;
    double pi = 3.14159;
    double aTriangulo, aTrapezio;
    double aCirculo, aQuadrado, aRetangulo;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    aTriangulo = (A * C) / 2;
    aCirculo = pow(C, 2) * pi;
    aTrapezio = ((A + B) * C) / 2;
    aQuadrado = pow(B, 2);
    aRetangulo = A * B;
    
    printf("TRIANGULO: %.3lf\n", aTriangulo);
    printf("CIRCULO: %.3lf\n", aCirculo);
    printf("TRAPEZIO: %.3lf\n", aTrapezio);
    printf("QUADRADO: %.3lf\n", aQuadrado);
    printf("RETANGULO: %.3lf\n", aRetangulo);
 
    return 0;
}
