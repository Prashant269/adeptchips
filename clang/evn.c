#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a value");
    scanf("%d",&a);
    if (a%2==0)
    {
	printf("number  %d  is even\n",a);

	
    }
    else
    {
	printf("number is odd");
	b=a*2;
	printf("%d",b);
    }
    return 0;

}
