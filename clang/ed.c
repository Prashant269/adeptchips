#include<stdio.h>
  int ed(int x);
 int main() 
{
    int a[5],i;
    printf("enter array elements\n");
    for(i=0;i<5;i++)
	    {
	    scanf("%d",&a[i]);
	    ed(a[i]);

	    } 
	    return 0;
}   	

	    int ed(int x)
	    {
	    if (x%2==0)
	    {
	    printf("even\n");
	    }
	    else
	    {
	    printf("odd\n");
	    }
}
