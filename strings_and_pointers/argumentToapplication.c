#include<stdio.h>

int main(int argc, char const *argv[]) {
  printf("%d\n",argc );
  for (int i=0;i<argc;i++){
    printf("argv[%d] %s\t",i,argv[i]);
  }
  printf("\n");
  return 0;
}
