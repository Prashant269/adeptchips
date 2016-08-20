#include<stdio.h>
int main()
{
    int i,a[5],s,l;

    printf("enter the array elements :\n");
    for(i=1;i<5;i++)
    {

	scanf("%d",&a[i]);

	if(l<a[i])
	{
	    l=a[0];
	    l=a[i];
	}    
	if(s>a[i])
	{	s=a[0];
	    s=a[i];
	}
    }
    printf("Largest number int array is: %d\n",l);
    printf("smallest number in the array is:%d\n",s);
    return 0;
}
