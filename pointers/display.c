/*
%x Displays the value as a hexadecimal number.
%o Displays the value as an octal number.
%p Displays the value in an implementation-specific manner; typically as a hexadecimal number.
*/

#include<stdio.h>
void main(){
  int num = 0;
  int *pi = &num;
  printf("Address of num: %d Value: %d\n",&num, num);
  printf("Address of pi: %d Value: %d\n",&pi, pi);
  printf("Address of pi: %d Value: %d\n",&pi, pi);
  printf("Address of pi: %x Value: %x\n",&pi, pi);  //%x for displaying the value as a hexadecimal number
  printf("Address of pi: %o Value: %o\n",&pi, pi);  //%o for displaying the value as octal number
  printf("Address of pi: %p Value: %p\n",&pi, pi);  //%p for displaying the value in an implementation specific manner, typically as a hexadecimal number
  printf("Value of pi: %p\n", (void*)pi);
}
