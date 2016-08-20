#include<stdio.h>
int main()
{
    char *arr[]={ "white",
	"red",
	"green",
	"yellow",
	"blue"};
    int i;
    for(i=0;i<5;i++)
    {
	printf("Address of the element is:%p\t",arr+i);
	printf("%s\n",*(arr+i));
    }
    return 0;
}
