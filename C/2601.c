#include <stdio.h>

int main(void){
    int memo[41] = {0, 1, 1};

    int n;
    scanf("%d",&n);
    for(int i=3; i<=n; i++){
        memo[i] = memo[i-1] + memo[i-2];
    }
    printf("%d",memo[n]);
    return 0;
}