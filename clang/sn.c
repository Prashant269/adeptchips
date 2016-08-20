#include<stdio.h>
int a[5],i,sum=0;
int main()
{
printf("enter the array elments:\n");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
    sum=sum+a[i];
}
printf("the sum of the array elemnts are:%d\n",sum);
return 0;
}
