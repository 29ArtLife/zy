#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float p=sqrt(b*b-4*a*c);
    printf("%.4f ",(-b-p)/2/a);
    printf("%.4f",(-b+p)/2/a);

}