#include<stdio.h>
int read_req(void){
  char buf[128];
  int i;
  gets(buf);
  i= atoi(buf);
  return i;
}

void main(){
  int x=read_req();
  printf("x=%d\n",x);
}
