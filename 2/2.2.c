#include <stdio.h>
struct student {
    int a;
    int b;
};
int main(){
    struct student c[50];
    for(int i=0;i<=49;i++){
        scanf("%d %d",&c[i].a,&c[i].b);
    }
    for(int i=0;i<=49;i++){
        if(c[i].b>=80){
            printf("%d %d\n",c[i].a,c[i].b);
        }
    }
}