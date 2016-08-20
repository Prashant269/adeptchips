#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    printf("enter n value");
    scanf("%d",&n);
    while(n>0)
    {
      rem=n%10;
      sum=sum+rem;
      n=n/10;
    }
    printf("sum of the given digits =%d\n",sum);
}    
