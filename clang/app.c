#include<stdio.h>
int main()
{
    int i,(*ptr)[5],a[5]={10,20,30,40,50};
    ptr=&a;
    printf("The Array elements  and the address of the elemente are:\n");
    for(i=0;i<5;i++)
    {
	printf("%d\t:",(*ptr)[i]);
	printf("%p\t",*ptr);
    }
    printf("\n");
    return 0;
}
