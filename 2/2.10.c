#include <stdio.h>
int a(int n);
int main(){
    for(int i=100;i<=200;i++){
        if(a(i)==1){
            printf("%d\n",i);
        }
    }

}



int a(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}