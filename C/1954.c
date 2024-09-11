#include <stdio.h>

void f(int n){
    if(n==0) return;
    f(n-1);
    printf("*");
}

void star(int n){
    if(n==0) return;
    f(n);
    printf("\n");
    star(n-1);
}


int main(void){
    int n;
    scanf("%d", &n);
    star(n);
    return 0;
}