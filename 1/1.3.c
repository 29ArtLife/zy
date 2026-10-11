#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b){
        printf("max=%d",a);
    }
     if(a<b){
        printf("max=%d",b);
    }
    return 0;
}