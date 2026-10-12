#include<stdio.h>
int main(){
    char a=getchar();
    if(a>='A'&&a<='Z'){
        putchar(a+32);
    }
    else{
        putchar(a);
    }

}