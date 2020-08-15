#include<stdio.h>
#include<stdlib.h>

typedef struct _node{
  int data;
  struct _node *next;
}Node;

typedef struct _linklist{
  struct _node *start;
  struct _node *end;
  struct _node *current;
}Linklist;

//create new link list
Linklist * create(){
  Node *node=(Node*)malloc(sizeof(Node));
  Linklist *linklist=(Linklist*)malloc(sizeof(Linklist));
  linklist->start=node;
  linklist->end=node;
  linklist->current=node;
  node->data=25;
  node->next=NULL;
  return linklist;
}

//insert new data
void insert(Linklist *linklist,int data){
  Node *node = (Node*)malloc(sizeof(Node));
  node->data=data;
  node->next=NULL;
  linklist->current->next=node;
  linklist->current=node;
}

//display
void display(Linklist *linklist){
  Node *node=(Node*)malloc(sizeof(Node));
  node=linklist->start;
  while(node->next!=NULL){
    printf("%d\t",node->data);
    node=node->next;
  }
  printf("%d\n",node->data);
}

int main(int argc, char const *argv[]) {
  Linklist *linklist=create();
  insert(linklist,15);
  display(linklist);
  return 0;
}
