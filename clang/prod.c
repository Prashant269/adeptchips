#include<stdio.h>
int main()
{
    int n,rem,product=1;
    printf("enter the n value");
    scanf("%d",&n);
    while(n>0)
    {
	rem=n%10;
	product=product*rem;
	n=n/10;
    }
    printf("the product of the given digits is=%d ",n);
    
}
