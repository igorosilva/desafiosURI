#include <stdio.h>

int main(){
	
	int n, cont=0;
	double x1, x2, x3, media;
	
	scanf("%d", &n);
	
	while(cont < n){
		cont++;
		
		scanf("%lf %lf %lf", &x1, &x2, &x3);
	
		media = ((x1 * 2) + (x2 * 3) + (x3 * 5)) / 10;
		
		printf("%.1lf\n", media);			
	}
	
	return 0;
}
