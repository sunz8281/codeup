#include <stdio.h>

int memo[101];

int f(int n){
    if(n==1||n==2) return 1;
    if(memo[n]) return memo[n];
    return memo[n]=(f(n-1)+f(n-2))%1000000007;
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}