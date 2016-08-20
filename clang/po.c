#include<stdio.h>
int main()
{
    int a=5,*ptr;
    ptr=&a;
    printf("%p\n", ptr);
    printf("input a number");
    scanf("%d",ptr);
    printf("%p\t%d\n", ptr, *ptr);
    printf("%d %d \n",a,*ptr);
    return 0;
}
