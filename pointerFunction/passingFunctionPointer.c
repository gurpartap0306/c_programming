#include<stdio.h>

typedef int (*fptrOperation)(int,int);

int add(int num1,int num2){
  return num1+num2;
}

int sub(int num1,int num2){
  return num1-num2;
}

int compute(fptrOperation operation,int num1,int num2){
  return operation(num1,num2);
}

void main(){
  printf("%d\n",compute(add,5,6));
  printf("%d\n",compute(sub,5,6));
}
