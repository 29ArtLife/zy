#include<stdio.h>
#include<math.h>
int main(){
    float r,h;
    scanf("%f %f",&r,&h);
    double P=acos(-1);
    printf("%.2f ",P*2*r);
    printf("%.2f ",P*r*r);
    printf("%.2f ",P*r*r*h);
    printf("%.2f ",4*P*r*r);
    printf("%.2f\n",4.0/3*P*r*r*r);
}
