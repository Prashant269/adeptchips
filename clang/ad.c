#include<stdio.h>
int ad(int val[] ) ;
int main()
{
    int i ,a[5];
    printf("Enter the array elemets :");
    for(i=0;i<5;i++)
    {
	scanf("%d",&a[i]);
	

    }
    for(i=0;i<5;i++)
    {
    	printf("%d",a[i]);
    	ad(a);
    }
      
   return 0;
 } 



int ad(int val[])
{

    int i,sum=0;

    for(i=0;i<5;i++)
    {
	sum=sum+val[i];
    }

    printf("sum of the array elements %d\n",sum);
}  

        
