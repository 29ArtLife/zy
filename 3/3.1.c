#include <stdio.h>
int main(){
    int a[8];
    for(int i=0;i<=7;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=7;i++){
        if(a[i]>0){
        printf("%o %x\n",a[i],a[i]);
        }
        else{
            printf("-%o -%x\n",-a[i],-a[i]);
        }
    }

}