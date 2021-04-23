#include <stdio.h>

int main(){
	
	int t, n, i;
	long long int f[60];
		
	f[0] = 0;
	f[1] = 1;
	for(i = 2; i <= 60; i++){
		f[i] = f[i-1] + f[i-2];
	}
	
	scanf("%d", &t);
	
	for(i = 0; i < t; i++){
		scanf("%d", &n);
		printf("Fib(%d) = %lld\n", n, f[n]);
	}
	
	return 0;
}
