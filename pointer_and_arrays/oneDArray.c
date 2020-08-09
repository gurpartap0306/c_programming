#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main(int argc, char const *argv[]) {
  int *pv = (int *)malloc(5*sizeof(int));
  for(int i=0;i<5;i++){
    *(pv+i)=i+1;
  }
  char buf[100][100];
  for(int i=0;i<5;i++){
    sprintf(buf[i],"%d",*(pv+i));
  }
  //for (int i=0;i<strlen(buf[1]);i++)printf("%c",buf[1][i]);
  //write(0,buf,strlen(buf[2]));
  return 0;
}
