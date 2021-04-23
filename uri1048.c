#include <stdio.h>

int main(){
	
	double salario, reajuste;
	int percentual;
	
	scanf("%lf", &salario);
	
	if(salario <= 400){ //salario entre 0 e 400
		reajuste = salario * 0.15;
		salario += reajuste;
		percentual = 15;		
	} else if(salario <= 800){ //salario entre 400.01 e 800
		reajuste = salario * 0.12;
		salario += reajuste;
		percentual = 12;		
	} else if(salario <= 1200){ //salario entre 800.01 e 1200
		reajuste = salario * 0.10;
		salario += reajuste;
		percentual = 10;		
	} else if (salario <= 2000){ //salario entre 1200.01 e 2000
		reajuste = salario * 0.07;
		salario += reajuste;
		percentual = 7;		
	} else { //salario acima de 2000
		reajuste = salario * 0.04;
		salario += reajuste;
		percentual = 4;		
	}

		printf("Novo salario: %.2lf\n", salario);
		printf("Reajuste ganho: %.2lf\n", reajuste);
		printf("Em percentual: %d %%\n", percentual);
	
	return 0;
}
