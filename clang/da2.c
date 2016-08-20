#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    int (*p)[3];
    printf("enter the size of the r:");
    scanf("%d",&n);
    p=(int(*)[3])malloc(n*3*sizeof(int)); 
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
	for(j=0;j<3;j++)
	{
	    scanf("%d",&p[i][j]);
	}

    }
    printf("the array elements are:\n");
    for(i=0;i<n;i++)
    {
	for(j=0;j<3;j++)
	{
	    printf("%d\t",p[i][j]);
	}
	 printf("\n");
    }
    return 0;

}

