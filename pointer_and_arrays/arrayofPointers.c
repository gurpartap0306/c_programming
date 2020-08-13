#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]) {
    int* arr[5];
    for (int i=0;i<5;i++){
      arr[i]=(int *)malloc(sizeof(int));
      *arr[i]=i;
    }
    for(int i=0;i<5;i++)
      printf("%d ",*arr[i]);
  return 0;
}
