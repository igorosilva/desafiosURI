#include <stdio.h>

int main(){
	
	int n, cont, tab;
	
	scanf("%d", &n);
	
	for(cont=1; cont <= 10 ;cont++){
		tab = cont * n;
		
		printf("%d x %d = %d\n", cont, n, tab);
	}	
	
	return 0;
}
