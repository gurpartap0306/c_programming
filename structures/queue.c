#include <stdio.h>
#include<stdlib.h>

typedef struct _node{
  int data;
  struct _node *next;
}Node;

typedef struct queue{
  struct _node *start;
  struct _node *end;
}Queue;

//create and insert
void enqueue(Queue *queue,int data){
  Node *node=(Node*)malloc(sizeof(Node));
  node->data=data;
  if(queue->start==NULL){
    queue->start=node;
    queue->end=node;
  }
  else{
    queue->end->next=node;
    queue->end=node;
  }
}
  //deque and display
  void dequeue(Queue *queue){
    Node *node = (Node*)malloc(sizeof(Node));
    node=queue->start;
    queue->start=queue->start->next;
    printf("%d\n",node->data);
    free(node);
  }

int main(int argc, char const *argv[]) {
  Queue *queue=(Queue*)malloc(sizeof(Queue));
  enqueue(queue,25);
  enqueue(queue,10);
  dequeue(queue);
  return 0;
}
