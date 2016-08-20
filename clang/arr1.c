#include<stdio.h>
int main()
{
    int a[5],i;
    printf("enter the array elements:");
    for(i=1;i<5;i++)
    {
	scanf("%d",&a[i]);
    }
    printf("array elemnts are:\n");
    for(i=1;i<5;i++)
    {
	printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}




