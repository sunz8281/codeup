#include<stdio.h>

int main(void) {
    long long arr[51][51]={};
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++, puts("")) {
        for(int j=1; j<=i; j++) {
            if(i==1||j==1) arr[i][j]=1;
            else arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
            printf("%lld ", arr[i][j]);
        }
    }
    return 0;
}