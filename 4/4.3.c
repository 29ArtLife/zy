#include <stdio.h>

/* 谭浩强 4.3：同一个 32 位位模式，换一个格式符就读出不同的值 */
int main(void){
    unsigned int a = 4294967295u;   /* 位模式 0xFFFFFFFF */
    int b = -2;                     /* 位模式 0xFFFFFFFE */

    printf("%d,%o,%x,%u\n", a, a, a, a);
    printf("%d,%o,%x,%u\n", b, b, b, b);

    return 0;
}
