#include <stdio.h>

int f(int n){
    if(n==1) return 1;
    if(n%2) return f(n*3+1)+1;
    else return f(n/2)+1;
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}