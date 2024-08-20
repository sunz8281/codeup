#include <stdio.h>

void g(int n){
    if(n==0) return;
    printf("*");
    g(n-1);
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
}