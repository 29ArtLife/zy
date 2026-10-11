#include<stdio.h>
int main(){
    double a=0;
    for(double i=1;i<=99;i=i+2){
        a=a+1/i;
    }
    double b=0;
    for(double i=2;i<=100;i=i+2){
        b=b+1/i;
    }
    printf("%.8f",a-b);
}