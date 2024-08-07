#include <stdio.h>

void f(int a, int b){
  if(a%2) printf("%d ", a);
  if(a==b) return;
  f(++a, b);
}

int main(void){
  int a, b;
  scanf("%d %d", &a, &b);
  f(a, b);
  return 0;
}