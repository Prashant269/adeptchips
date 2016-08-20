#include<stdio.h>
int ad(int x[]);
int main()
{
    int i,a[5],c;
    printf("enter the array elements:\n");
    for(i=1;i<5;i++)
    {
	scanf("%d",&a[i]);
    }
    printf("The array elemnts are:\n");
    c=ad(a);
    printf("%d",c);
    return 0;

}    
int ad(int x[])

{
    int i,evn=0,odd=0;
    for(i=1;i<5;i++)
    {
	printf("%d\n",x[i]);
	if (x[i]%2==0)
	{
	  
	}
        else
	{
	    odd++;
	}
	
    }
   
    
    
}
