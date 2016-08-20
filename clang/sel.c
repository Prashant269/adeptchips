#include<stdio.h>
int main()
{
    int i,j,a[5]={10,12,7,8,1},temp=0;
    printf("Array elemnts Before Sorting:\n");
    for(i=0;i<4;i++)
    {
	printf("%d\t",a[i]);
    
   }
    printf("\n");
    printf("Array elements After Sorting:\n");
    for(i=0;i<4;i++)
    {
	for(j=i+1;j<4;j++)
	{
	    if(a[i]<a[j])
	    {
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	    }
	}

    }
    for(i=0;i<4;i++)
    {
	printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}
