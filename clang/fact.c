#include<stdio.h>
int main()
{
    int n,i=1,fact=1;
    printf("enter a value");
    scanf("%d",&n);
    while(i<=n)
    {
      fact=fact*i;
      i++;
    }
    printf("factorial of the given number is %d",fact);
    return 0;
}

