#include <stdio.h>

int main(){
	
	int valid=0;
	double media, nota, soma=0;
		
	while(valid < 2){				
		scanf("%lf", &nota);
		
		if(nota >= 0 && nota <= 10){
			valid++;
			
			soma += nota;
			media = soma / 2;
		} else {
			printf("nota invalida\n");
		}		
	}	
	
	printf("media = %.2lf\n", media);
		
	return 0;
}
