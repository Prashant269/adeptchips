#include<stdio.h>
int main()
{
    int a[5],i,b,s;
      
     printf("enter array elements:\n");
    for(i=0;i<5;i++)
    {
    	s=b=a[0];
    	scanf("%d",&a[i]);
    	if(b<a[i])
	{
          b=a[i];
	}
	if(s>a[i])
	{
	    s=a[i];
	}
   }
   printf("bigger number inthe array is :%d\n",b);
   printf("smaller number is :%d\n",s);
   return 0;
}




