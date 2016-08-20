#include<stdio.h>
int prime(int x);
int main()
{
    int i,a[5];
    printf("enter the array elemets");
    for(i=1;i<5;i++)
    {
	scanf("%d",&a[i]);
	prime(a[i]);

    }    
    return 0;
}
int prime(int x)
{
    int i,count=0;
    for(i=0;i<=x;i++)
    {	
	if(x%i ==0)
	{
	    count=count++;
	}
	if(count==2)
	{

	    printf("prime number");
	}
	else
	{
	    printf("not a prime number");
	}
    } 
}
