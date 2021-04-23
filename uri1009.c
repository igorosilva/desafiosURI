#include <stdio.h>

int main() {
	
	char nome[20];
	double salario, vendas, total;
	
	printf("Digite o seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite o valor do seu salario: ");
	scanf("%lf", &salario);
	
	printf("Digite o valor total de vendas: ");
	scanf("%lf", &vendas);
	
	total = salario + (vendas * 0.15);
	
	printf("TOTAL = %.2lf \n", total);
	
	return 0;
}
