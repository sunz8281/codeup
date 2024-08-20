#include <stdio.h>

void g(int n){
    if(n==0) return;
    g(n-1);
    printf("%d ", n);
    return;
}

void f(int n){
    if(n==0) return;
    f(n-1);
    g(n);
    printf("\n");
    return;
}

int main(void){
    int n;
    scanf("%d", &n);
    f(n);
    return 0;
}