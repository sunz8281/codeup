#include <stdio.h>

int main(void){
    int memo[10000001] = {1};

    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        memo[i] = (memo[i-1]+i)%137;
    }
    printf("%d", memo[n]);
    return 0;
}