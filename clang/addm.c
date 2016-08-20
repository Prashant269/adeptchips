#include<stdio.h>
int main()
{
    int i,j,a[3][4],b[3][4],c[3][4];
    printf("enter 1 matrix elements:\n");
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    scanf("%d",&a[i][j]);

	}


    }
    printf("enterthe seecond matrix:\n");
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    scanf("%d",&b[i][j]);

	}

    }


    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    c[i][j]=a[i][j]+b[i][j];
	}
    }
    printf("\nAddition of the matrix is:");
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    printf("%d",c[i][j]);
	    printf("\t");

	}
	printf("\n");
    }
    return 0;
}
