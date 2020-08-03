#include <stdio.h>
#define NULL ((void *)0)
int main()
{
    char i=NULL;
    if(i==NULL){
        int j=NULL;
        printf("%d",j);
    }
    return 0;
}
