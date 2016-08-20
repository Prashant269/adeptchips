#include<stdio.h>
int main()
{
    int a=0,b=1,sum=0,i;
    printf("%d %d",a,b);
    for(i=1; i<=5;i++)
    {
	sum=a+b;
	a=b;
	b=sum;
	printf("%d",sum);

    }
    
	return 0;
}

