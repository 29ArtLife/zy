#include <stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i=m;i>=2;i--){
        if(m%i==0&&n%i==0){
            printf("%d\n",i);
            return 0;
        }
    }
}