#include <stdio.h>

long long int f(int n, int k){
    if(n==-1) k%=2;
    if(k==0) return 1;
    if(k==1||n==1) return n;
    return n * f(n, k-1);
}

int main(void){
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%lld", f(n, k));
    return 0;
}