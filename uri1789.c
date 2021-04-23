#include <stdio.h>

int main(){
	
	int i, q, x, vel, maisVeloz;
	
	while(scanf("%d",&q)!=EOF){
		
		maisVeloz = 0;
		
		for(i = 0; i < q; i++){
			scanf("%d", &x);
			
			if(x > maisVeloz){
				maisVeloz = x;
			}
		}
		if(maisVeloz < 10){
			vel = 1;	
		} else if(maisVeloz >= 10 && maisVeloz < 20){
			vel = 2;
		} else {
			vel = 3;
		}
		
		printf("%d\n", vel);	
	}
	
	return 0;
}
