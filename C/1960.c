#include <stdio.h>

int f(int n){
    if(n==1) return 2;
    return (f(n-1) + n)%137;
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}