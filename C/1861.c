#include <stdio.h>

int memo[26][26];

void g(int n, int m){
    if(m==0) return;
    g(n, m-1);
    if(n==m||m==1) memo[n][m]=1;
    else memo[n][m]=memo[n-1][m-1]+memo[n-1][m];
    printf("%d ", memo[n][m]);
    return;
}

void f(int n){
    if(n==0) return;
    f(n-1);
    g(n, n);
    printf("\n");
    return;
}

int main(void){
    int n;
    scanf("%d", &n);
    f(n);
    return 0;
}