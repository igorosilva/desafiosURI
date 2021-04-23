#include <stdio.h>

int main(){
	
	int pos = 0, cont;
	double n;
	
	for(cont = 0; cont < 6 ;cont++){
		scanf("%lf", &n);
		
		if(n > 0){
			pos++;			
		}
	}
		
	printf("%d valores positivos\n", pos);	
	
	return 0;
}
