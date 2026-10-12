#include<stdio.h>
int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if(a>b){
        if(a>c){
            if(b>c){
                printf("%.2f %.2f %.2f",c,b,a);
            }
            else{
                printf("%.2f %.2f %.2f",b,c,a);
            }
        }
        else{
            printf("%.2f %.2f %.2f",b,a,c);
        }
    }
    else{
        if(b>c){
            if(a>c){
                printf("%.2f %.2f %.2f",c,a,b);
            }
            else{
                printf("%.2f %.2f %.2f",a,c,b);
            }
        }
        else{
            printf("%.2f %.2f %.2f",a,b,c);
        }
    }
}