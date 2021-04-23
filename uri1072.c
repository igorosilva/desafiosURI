#include <stdio.h>

int main(){
	
	int n, cont=0, x;
	int dentro=0, fora=0;
	
	scanf("%d", &n);
	
	while(cont < n){
		cont++;
		
		scanf("%d", &x);
		
		if(x >= 10 && x <= 20){
			dentro++;
		} else {
			fora++;
		}
	}
	
	printf("%d in\n", dentro);
	printf("%d out\n", fora);	
	
	return 0;
}
