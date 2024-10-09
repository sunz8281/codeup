#include <stdio.h>

int main(void) {
    int arr[100001] = {};
    int k, n;
    scanf("%d %d", &k, &n);

    for(int i=1; i<=k; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=1; i<=k; i++) {
        arr[k+1] += arr[i];
    }
    for(int i=k+2; i<=n; i++) {
        arr[i] = (arr[i-1]*2  - arr[i-k-1] + 100007) % 100007;
    }
    printf("%d", arr[n]);

    return 0;
}