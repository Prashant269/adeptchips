#include<stdio.h>
int main()
{
    int a[10],i,evn=0,odd=0;
    printf("enter array elements:\n");
    for(i=0;i<10;i++)
    {
	scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
	if(a[i]%2==0)
	{
	    evn++;
	}
	else
	{
	    odd++;
	}
    }
    printf("even numbers are:%d\n",evn);
    printf("odd numbers are: %d\n",odd);
    return 0;
}

