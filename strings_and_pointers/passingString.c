#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *format(char *buffer,size_t size,const char* name,size_t quantity, size_t weight){
  char *formatString="Item: %s quantity: %u weight: %u";
  size_t formatStringLength =strlen(formatString)-6;
  size_t nameLength=strlen(name);
  size_t length=formatStringLength+nameLength+10+10+1;

  if(buffer==NULL){
    buffer=(char *)malloc(length);
    size=length;
  }
  snprintf(buffer,size,formatString,name,quantity,weight);
  return buffer;
}

int main(int argc, char const *argv[]) {
  char *buffer=NULL;
  printf("%s\n",format(buffer,sizeof(buffer),"Axle",25,45));
  return 0;
}
