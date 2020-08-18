#include<stdio.h>

enum escape {BELL='\a',BACKSPACE='\b',TAB='\t',NEWLINE='\n',VTAB='\v',RETURN='\r'};


int main(int argc, char const *argv[]) {
  enum escape c;
  c=TAB;
  printf("hello %c",c);
  return 0;
}
