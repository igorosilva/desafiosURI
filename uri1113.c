#include <stdio.h>

int main(){
	
	int x, y;
		
	while (x != y){
		scanf("%d %d", &x, &y);
		
		if(y > x){
			printf("Crescente\n");
		} else if (y < x){
			printf("Decrescente\n");
		}
	} 
	
	return 0;
}
