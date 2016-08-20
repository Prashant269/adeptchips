#include<stdio.h>
int main()
{
    int a=5,*ptr=&a,**p=&ptr;
    
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
    printf("%p",p);
    return 0;
}
