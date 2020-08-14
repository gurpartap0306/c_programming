#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[]) {
  char *header;
  header=(char *)malloc(strlen("Media Player")+1);
  char buf[]="Media Player";
  //header=buf;
  //strcpy(header,"Media Player");
  header="Media Player";
  printf("%s\n",header);
  return 0;
}
