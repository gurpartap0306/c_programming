#include<stdlib.h>
#include<unistd.h>
#include<string.h>

void main(){
  char *string1;
char *string2;
string1 = (char*) malloc(16);
strcpy(string1, "0123456789AB");
string2 = realloc(string1, 8);
while(*string1 !=0){
  write(0,string1,sizeof(char));
  string1++;
}
while(*string2 !=0){
  write(0,string2,sizeof(char));
  string2++;
}
//printf("string1 Value: %p [%s]\n", string1, string1);
//printf("string2 Value: %p [%s]\n", string2, string2);
}
