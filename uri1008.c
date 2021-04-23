#include <stdio.h>

int main() {
	
	int funcionario, horas;
	double valorHora, salario;
	
	printf("Digite o numero do funcionario: ");
	scanf("%d", &funcionario);
	
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%d", &horas);
	
	printf("Digite o valor da hora trabalhada: ");
	scanf("%lf", &valorHora);
	
	salario = (double)horas * valorHora;
	
	printf("NUMBER = %d \n", funcionario);
	printf("SALARY = U$ %.2lf \n", salario);
	
	return 0;
}
