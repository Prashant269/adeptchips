#include<stdio.h>
int main()
{
    int a,i,count=0;
    printf("enter a value");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
	if(a%i==0)
	{
	    count++;
	}
    }
   
    if(count==2)
    {
	printf("/nprime number");
    }
    else
    {
	printf("not a prime number");
    }

    return 0;
}


