#include <stdio.h>

int memo[30001] = {1};

int f(int n){
    if(memo[n]) return memo[n];
    return memo[n] = (f(n-1) + n)%137;
}

int main(void){
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}