#include <stdio.h>

int main()
{
    int num=0;
    int * pic = &num;
    printf("%d \n",*pic);
    printf("%d \n",num);
    printf("%d",pic);

    return 0;
}
