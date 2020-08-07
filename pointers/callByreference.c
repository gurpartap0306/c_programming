#include<unistd.h>
#include<stdio.h>
#include<string.h>

void swap(int *ptr1,int *ptr2){
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}

void main(){
	int num1=5;
	int num2=10;
	int *ptr1, *ptr2;
	ptr1=&num1;
	ptr2=&num2;
	swap(ptr1,ptr2);
	char buf1[4];
	char buf2[4];
	sprintf(buf1,"%d\n",*ptr1);
	sprintf(buf2,"%d\n",*ptr2);
	write(0,buf1,strlen(buf1));
	write(0,buf2,strlen(buf2));
	//printf("%d\n%d",*ptr1,*ptr2);
}
