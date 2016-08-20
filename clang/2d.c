#include<stdio.h>
int main()
{
    int a[3][4]={{10,20,30,40},{50,60,70,80},{90,100,110,120}},i,j;
    int (*p)[4];
     p=a;
    for(i=0;i<3;i++)
    {
	for(j=0;j<4;j++)
	{
	    printf("%d\t",*(*(p+i)+j));
	}
	printf("\n");
    }
    return 0;
}
