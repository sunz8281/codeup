#include <stdio.h>

void star(int n){
  if(n<=0) return; 
  star(n-1);
  printf("*");
}

int main(void){
  int n;
  scanf("%d", &n);
  star(n);
  return 0;
}
