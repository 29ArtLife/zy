#include <stdio.h>
int a(int year);
int main(){
    for(int i=1900;i<=2000;i++){
        if(a(i)==1){
            printf("%d\n",i);
        }
    }

}
int a(int year){
    if(year%400==0){
        return 1;
        printf("leap year");
    }
    else{if(year%4==0){
        if(year%100==0){
            return 0;
            printf("not leap year");
        }
        else{
            return 1;
            printf("leap year");
        }
    }
    else{
        return 0;
        printf("not leap year");
    }
}
}

