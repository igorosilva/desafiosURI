#include <stdio.h>

int main(){
	
	int senha = 2002;
	int x;
		
	while(x != senha){
		scanf("%d", &x);
		
		if(x != senha){
			printf("Senha Invalida\n");
		}
	}
	
	printf("Acesso Permitido\n");
	
	return 0;
}
