#include <stdio.h>

int main(){
	
	double renda, imposto = 0;
	
	scanf("%lf", &renda);
	
	if(renda >= 0 && renda <= 2000){
		printf("Isento\n");
	} else if (renda > 2000 && renda <= 3000){
		renda -= 2000;
		imposto = renda * 0.08;	
			 
		printf("R$ %.2lf\n", imposto);
	} else if (renda > 3000 && renda <= 4500){
		renda -= 3000;
		imposto = (renda * 0.18) + 80;
		
		printf("R$ %.2lf\n", imposto);
	} else {
		renda -= 4500;
		imposto = (renda * 0.28) + 350;
		
		printf("R$ %.2lf\n", imposto);
	}
	
	return 0;
}
