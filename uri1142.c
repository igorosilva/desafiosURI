#include <stdio.h>
#include <math.h>

int main(){
	
	int n, cont, a=1, b=2, c=3;
		
	scanf("%d", &n);
	
	for(cont = 0; cont < n ;cont++){
		printf("%d %d %d PUM\n", a, b, c);
		
		a += 4;
		b += 4;
		c += 4;		
	}
	
	return 0;
}
