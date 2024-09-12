#include <stdio.h>

int f(char *k){
    if(*k < 10) return *k;
    return f(k+1) + (*k - '0');
}

int main(void) {
    char n[100];
    scanf("%s", n);
    printf("%d", f(n));
}