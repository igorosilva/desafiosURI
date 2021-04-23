#include <stdio.h>
 
int main() {
    int valor1, valor2, prod;
    
    printf("Digite o primeiro valor: ");
    scanf("%i", &valor1);
    
    printf("Digite o segundo valor: ");
    scanf("%i", &valor2);
    
    prod = valor1 * valor2;
    
    printf("PROD = %i \n", prod);
 
    return 0;
}
