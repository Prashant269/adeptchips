#include<stdio.h>
int main()
{
    int i,even=0,odd=0,a[5];
    printf("enter array elements:\n");
    for(i=1;i<5;i++)
    {
    	scanf("%d",&a[i]);
    	if(a[i]%2==0)
	{
	    even++;
	}
	else
	{
	    odd++;
	}
    }
    printf("the no of even numbers  in array are:%d\n",even);
    printf("the no of odd numbers  in array are:%d\n",odd);
    return 0;
}
