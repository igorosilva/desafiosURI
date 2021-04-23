#include <stdio.h>
#include <math.h>
 
int main() {
 
    double pi = 3.14159;
    double a;
    double raio;
    
    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);
    
    a = pi * pow(raio, 2);
    
    printf("A=%.4lf \n", a);
 
    return 0;
}
