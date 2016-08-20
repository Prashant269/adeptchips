#include<stdio.h>
int main()
{
    int a,b,q,r;
    printf("enter a value:");
    scanf("%d",&a);
    printf("enter b value:");
    scanf("%d",&b);
    if(b)
    {
      q=a/b;
      printf("quotient=%d\n",q);
      r=a%b;
      printf("remainder=%d",r);
    
    }
    else
    {
    	printf("divident cant be zero");
    }
    return 0;
}
