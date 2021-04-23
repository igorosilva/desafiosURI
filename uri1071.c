#include <stdio.h>

int main(){
	
	int x, y, soma, cont;
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	if(x > y){
		for(cont = y + 1; cont < x ;cont++){
			if(cont % 2 != 0){
				soma += cont;
			}
		}
	} else if (x < y){
		for(cont = x + 1; cont < y ;cont++){
			if(cont % 2 != 0){
				soma += cont;
			}
		}
	} /* *********** */else {
		
		/* *********** */
		soma = x - y;
		
	} /* *********** */
	
	printf("%d\n", soma);
	
	return 0;
}
