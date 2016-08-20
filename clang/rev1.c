#include<stdio.h>
int main()
{
    int i,a[5];
    printf("enter the array elements:\n");
    for(i=0;i<5;i++)
    {
	scanf("%d",&a[i]);
    }
    for(i=5;i>=0;i--)
    {
	printf("%d\t",a[i]);

    }
    return 0;
}

