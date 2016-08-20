#include<stdio.h>
int main()
{
    int n,digit,sum=0,temp=0;
    printf("enter n value");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
	digit=n%10;
	sum=sum+digit*digit*digit;
	n=n/10;
    }
    if (sum==temp)
	printf("The number is a Amstrong %d\n",sum);
    else
    {
	printf("%d Not a Amstrong number\n",sum);
    }


    return 0;
}
