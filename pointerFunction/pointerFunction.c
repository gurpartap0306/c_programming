#include<stdio.h>

int (*ptr)(int);
int square(int n){
  return n*n;
}

void main(){
  int n=5;
  ptr=square;
  printf("%d\n",ptr(n));
}
