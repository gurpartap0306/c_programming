#include<stdio.h>
#include<stdlib.h>

void main(){
  int * pi =(int *)malloc(sizeof(int));
  *pi =5;
  printf("*pi: %d\n", *pi);
  free(pi);

}
