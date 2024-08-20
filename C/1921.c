#include <stdio.h>

void f(int n, int k){
    char hexa[] = "0123456789ABCDEF";
    if(n<k){
        printf("%c", hexa[n]);
        return;
    }
    f(n/k, k);
    printf("%c", hexa[n%k]);
    return;
}

int main(void){
    int n, k;
    scanf("%d %d", &n, &k);
    f(n, k);
    return 0;
}