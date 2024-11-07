#include <stdio.h>

int arr[10001][10001];

int main(void) {

    int n, r;
    scanf("%d %d", &n, &r);

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            if(i==j) arr[i][j] = 1;
            else if(j==1) arr[i][j] = i;
            else arr[i][j] = (arr[i-1][j-1] + arr[i-1][j]) % 100000007;
        }
    }

    printf("%d", arr[n][r]);

    return 0;
}