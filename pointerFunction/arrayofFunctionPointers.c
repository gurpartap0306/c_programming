#include<stdio.h>

typedef int (*operation)(int,int);

int add(int a,int b){return a+b;}
int sub(int a, int b){return a-b;}

void main(/* arguments */) {
  operation operations[128]={NULL};
  operations['+']=add;
  operations['-']=sub;
  printf("%d\n",operations['-'](5,10));
}
