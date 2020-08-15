#include<stdio.h>
#include<stdlib.h>

typedef struct _person{
  char* name;
  int age;
}Person;

int main(int argc, char const *argv[]) {
  Person *person = (Person*)malloc(sizeof(Person));
  person->name="gurpartap";
  person->age=21;
  printf("My name is %s and age %d\n",person->name,person->age);
  return 0;
}
