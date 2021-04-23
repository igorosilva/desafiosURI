#include <stdio.h>

int main(){
	
	int n, cont, linha[46];
	linha[0]=0;
	linha[1]=1;
	
	scanf("%d", &n);
	
	if(n < 46 && n > 0){
		for(cont = 2; cont < n ;cont++){
			linha[cont] = linha[cont - 1] + linha[cont - 2];
		}
		
		printf("0");
		
		for(cont = 1; cont < n ;cont++){
			printf(" %d", linha[cont]);
		}	
	}	
	
	printf("\n");
	
	return 0;
}
