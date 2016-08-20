#include<stdio.h>
int main()
{
    int i,a[5]={10,20,30,40,50};
     
    printf("The array elements are:\n");
    for(i=0;i<5;i++)
    {
	printf("%",*(a+i));
    }
    return 0;
}
