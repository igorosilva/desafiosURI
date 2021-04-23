#include <stdio.h>

int main(){
	
	int par[5], impar[5], i, j, x;
	int vetp, veti;
	
	vetp = 0;
	veti = 0;

	for(i = 0; i < 15; i++){
		scanf("%d", &x);
			
		if(x % 2 == 0){
			par[vetp] = x;
			vetp++;
			
			if(vetp == 5){
				for(j = 0; j < 5; j++){
					printf("par[%d] = %d\n", j, par[j]);	
				}
				vetp = 0;					
			}
		} else {
			impar[veti] = x;
			veti++;
			
			if(veti == 5){
				for(j = 0; j < 5; j++){
					printf("impar[%d] = %d\n", j, impar[j]);	
				}
				veti = 0;					
			}
		}						
	}
	
	for(j = 0; j < veti; j++){
		printf("impar[%d] = %d\n", j, impar[j]);
	}
	
	for(j = 0; j < vetp; j++){
		printf("par[%d] = %d\n", j, par[j]);
	}
	
	return 0;
}
