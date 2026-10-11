#include <stdio.h>
int main(){
    char a[5]="China";
    for(int i=0;i<=4;i++){
        a[i]=a[i]+4;
    }
    printf("%s",a);

}