#include <stdio.h>

int main(){
	
	int cont, pos=0;
	double n, soma=0, media=0;
	
	for(cont = 0; cont < 6 ;cont++){
		scanf("%lf", &n);
		
		if(n > 0){
			pos++;
			
			soma += n;			
			media = (double)soma / pos;
		}
	}
	
	printf("%d valores positivos\n", pos);
	printf("%.1lf\n", media);
	
	return 0;
}
