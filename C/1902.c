#include <stdio.h>

void f(int n){
  if(!n) return;
  printf("%d\n", n);
  f(n-1);
}

int main(void){
  int n;
  scanf("%d", &n);
  f(n);
}