#include<stdio.h>
int ad( int b[3][3]);
int main()
{
    int i,j,a[3][3];
    printf("Enter the arrar elements:\n");
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    scanf("%d",&a[i][j]);
	}
    } 
    printf("the array elements:\n");
    ad(a);
    return 0;
}
int ad(int b[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	    printf("%d\t",b[i][j]);
	}
	printf("\n");
    }


}

