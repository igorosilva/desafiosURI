#include <stdio.h>
 
int main() {
 
    int x;
    double y, total;
    
    scanf("%d", &x);
    scanf("%lf", &y);
    
    total = (float) x / y;
    
    printf("%.3lf km/l\n", total);
 
    return 0;
}
