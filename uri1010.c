#include <stdio.h>
 
int main() {
 
    int peca1, peca2;
    int quant1, quant2;
    double valor1, valor2, total;
    
    scanf("%d %d %lf", &peca1, &quant1, &valor1);
    scanf("%d %d %lf", &peca2, &quant2, &valor2);
    
    total = (double)(quant1 * valor1) + (quant2 * valor2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}
