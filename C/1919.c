#include <stdio.h>

long long int g(int n){
    if(n/10==0) return 1;
    return g(n/10) * 10;
}

long long int f(int n){
    if(n/10==0) return n%10;
    return (n%10) * g(n) + f(n/10);
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%lld", f(n));
    return 0;
}