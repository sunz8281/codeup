#include <stdio.h>

int memo[13][13];

int f(int n, int r){
    if(memo[n][r]) return memo[n][r];
    if(n == r) return memo[n][r] = 1;
    if(r == 1) return memo[n][r] = n;
    return memo[n][r] = f(n-1, r) + f(n-1, r-1);
}

int main(void){
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d", f(n, r));
    return 0;
}