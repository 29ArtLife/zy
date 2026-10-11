#include <stdio.h>
int main(){
    int a,n;
    scanf("%d %d",&a,&n);
    a%=(n%=2);
    printf("%d",a);
}