#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    int (*p)[3];
    printf("enter the row size:\n");
    scanf("%d",&n);

    p=(int(*)[3])malloc(n*3*sizeof(int));
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
	for(j=0;j<3;j++)
	{
	    scanf("%d",(*(p+i)+j));
	}
    }
    printf("The 2 Dimensional array is:\n");
    for(i=0;i<n;i++)

    {
	for(j=0;j<3;j++)
	{
	    printf("%d\t",*(*(p+i)+j));
	}
	printf("\n");
    }
      printf("\n");
    return 0;
}


