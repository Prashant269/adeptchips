#include<stdio.h>
void *fun(int *p,int n);
int main()
{
    int i,a[5];
    printf("Enter The Array Elements:\n");
    for(i=0;i<5;i++)
    {
	scanf("%d",&a[i]);
    }
    printf("The Array Elements are:\n");
    fun(a,i);

    return 0;
}

void *fun(int *p,int n)
{
    for(n=0;n<5;n++)
    {
	printf("%p\t",p+n);
    }
    printf("\n");
}
