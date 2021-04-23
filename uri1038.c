#include <stdio.h>

int main(){
	
	int cod, quant;
	double total;
	
	scanf("%d %d", &cod, &quant);
	
	if(cod == 1){
		total = (double)quant * 4.00;
		printf("Total: R$ %.2lf\n", total);
	} else if (cod == 2){
		total = (double)quant * 4.50;
		printf("Total: R$ %.2lf\n", total);
	} else if (cod == 3){
		total = (double)quant * 5.00;
		printf("Total: R$ %.2lf\n", total);
	} else if (cod == 4){
		total = (double)quant * 2.00;
		printf("Total: R$ %.2lf\n", total);
	} else {
		total = (double)quant * 1.50;
		printf("Total: R$ %.2lf\n", total);	
	}
	
	return 0;
}
