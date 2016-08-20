#include<stdio.h>
int ar(int a[3][3]);
int main()
{
    int i,j,b[3][3];
    printf("Enter the array elements:\n");
    for(i=1;i<=3;i++)
    {
	for(j=1;j<=3;j++)
	{
	    scanf("%d",&b[i][j]);
	}
    }
    printf("The Array elements :\n");
    ar(b);
    return 0;
}
int ar(int a[3][3])
{
    int i,j;
    for(i=1;i<=3;i++)
    {
	for(j=1;j<=3;j++)
	{
	    printf("%d\t",a[i][j]);


	}

	printf("\n");
    }
}
