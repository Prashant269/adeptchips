#include<stdio.h>
int main()
{
    int i,j,*ptr[3],a[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    ptr=a;
    printf("The Two Dimensional Array elements are:\n");
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{

	    printf("%d\t",*(*(ptr+i)+j));
	}
	 printf("\n");
    }
    return 0;
}
