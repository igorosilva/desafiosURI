#include <stdio.h>

int main(){
	
	int i, n, pos, menor;
	
	scanf("%d", &n);
	
	int x[n];
	
	scanf("%d", &x[0]);
	
	menor = x[0];
	pos = 0;
	
	for(i = 1; i < n; i++){
		scanf("%d", &x[i]);
		
		if (x[i] < menor){
			menor = x[i];
			pos = i;
		}
	}
	
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", pos);		
		
	return 0;
}
