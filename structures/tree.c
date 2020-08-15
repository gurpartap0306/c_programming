#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef int(*COMPARE)(void*,void*);
typedef void(*DISPLAY)(void*);

typedef struct _tree{
  void *data;
  struct _tree *left;
  struct _tree *right;
}TreeNode;

typedef struct _employee{
  char name[32];
  unsigned char age;
}Employee;

int compare(Employee *e1,Employee *e2){
  return strcmp(e1->name,e2->name);
}

void display(Employee *employee){
  printf("%s\t%d\n",employee->name,employee->age);
}

//insert new node to the tree
void insertNode(TreeNode **root,COMPARE compare,void* data){
  TreeNode *temp=*root;
  TreeNode *node=(TreeNode*)malloc(sizeof(TreeNode));
  node->data=data;
  node->left=NULL;
  node->right=NULL;

  if(*root==NULL){
    *root=node;
    return;
  }
  while(1){
    if(compare((*root)->data,data)>0){
      if((*root)->left != NULL){
        *root=(*root)->left;
      }else{
        (*root)->left=node;
        break;
      }
    }else{
      if((*root)->right != NULL){
        *root=(*root)->right;
      }else{
        (*root)->right=node;
        break;
      }
    }
  }
  *root=temp;
}

//inorder traverse
void inOrder(TreeNode *root,DISPLAY display){
  if(root != NULL){
    inOrder(root->left,display);
    display(root->data);
    inOrder(root->right,display);
  }
}

//postorder traverse
void postOrder(TreeNode *root,DISPLAY display){
  if(root != NULL){
    postOrder(root->left,display);
    postOrder(root->right,display);
    display(root->data);
  }
}

//preorder traverse
void preOrder(TreeNode *root,DISPLAY display){
  if(root != NULL){
    display(root->data);
    preOrder(root->left,display);
    preOrder(root->right,display);
  }
}

int main(int argc, char const *argv[]) {

  Employee *baban=(Employee*)malloc(sizeof(Employee));
  Employee *harman=(Employee*)malloc(sizeof(Employee));
  Employee *tejwant=(Employee*)malloc(sizeof(Employee));
  strcpy(baban->name,"baban");
  baban->age=24;
  strcpy(harman->name,"harman");
  harman->age=20;
  strcpy(tejwant->name,"tejwant");
  tejwant->age=26;

  TreeNode *tree=NULL;
  insertNode(&tree,(COMPARE)compare,harman);
  insertNode(&tree,(COMPARE)compare,baban);
  insertNode(&tree,(COMPARE)compare,tejwant);

  preOrder(tree,(DISPLAY)display);
  printf("\n");
  inOrder(tree,(DISPLAY)display);
  printf("\n");
  postOrder(tree,(DISPLAY)display);
  return 0;
}
