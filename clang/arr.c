#include<stdio.h>
int main()
{
    int i,a[10],sum=0;
    printf("enter the array elements\n");
    for(i=1;i<=10;i++)
    {
	scanf("%d",&a[i]);
    }
     printf("sum of the array elements are:");
    for(i=1;i<=10;i++)
    {
    
	sum=sum+a[i];
	
    }
     printf("%d\n",sum);
    return 0;
}
