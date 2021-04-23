#include <stdio.h>

int main(){
	
	int cont, idade=1, soma=0;
	double media=0;
	
	for(cont = 1; idade > 0 ;cont++){
		scanf("%d", &idade);
		
		if(idade > 0){
			soma += idade;
			media = (double)soma / cont;
		}		
	}
	
	printf("%.2lf\n", media);
	
	return 0;
}
