#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a, b, c;
    double x, y, d;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a == 0){
    	printf("Impossivel calcular\n");
	} else{
		d = pow(b, 2) - (4 * a *c);
		if(d >= 0){
			x = (-b + sqrt(d)) / (2 * a);
			y = (-b - sqrt(d)) / (2 * a);
			
			printf("R1 = %.5lf\n", x);
			printf("R2 = %.5lf\n", y);
		} else{
			printf("Impossivel calcular\n");
		}
	}
	    
    return 0;
}
