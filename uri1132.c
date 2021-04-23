#include <stdio.h>

int main(){
	
	int cont, x, y, soma=0;
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	if(x > y){
		for(cont = y; cont <= x ;cont++){
			if(cont % 13 != 0){
				soma += cont;
			}
		}		
	} else if (y > x){
		for(cont = x; cont <= y ;cont++){
			if(cont % 13 != 0){
				soma += cont;
			}
		}				
	}
	
	printf("%d\n", soma);	
	
	return 0;
}
