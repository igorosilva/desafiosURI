#include <stdio.h>

int main(){
	
	int valid=0, novo=1;
	double media, nota, soma;
	
	while(novo == 1){
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
		valid = 0;	
			
		printf("media = %.2lf\n", media);
		
		soma = 0;
		media = 0;
		
		printf("novo calculo (1-sim 2-nao)\n");		
		scanf("%d", &novo);	
		
		while(novo != 1 && novo != 2){
			printf("novo calculo (1-sim 2-nao)\n");		
			scanf("%d", &novo);	
		}		
	}
	
	return 0;
}
