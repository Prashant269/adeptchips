#include<stdio.h>
int main()
{
    int a;
    printf("enter a value");
    scanf("%d",&a);
    if (a%2==0)
    {
	printf("the number %d is even",a);
    }
    printf("the number is odd");
    return 0;
}

