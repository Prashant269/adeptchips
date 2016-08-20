#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i ,n,*p;
    printf("enter the size of the array");
    scanf("%d",&n);
    p=(int *)malloc(n *sizeof(int));
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
	scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
	printf("%d",*(p+i));
    }
    return 0;
}

