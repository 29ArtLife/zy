#include <stdio.h>
int main(void){
    double x, y;
    int a;
    scanf("%lf %d %lf", &x, &a, &y);
    printf("%.6f\n", x + a%3*(int)(x+y)%2/4);
    return 0;
}
