#include<stdio.h>
int main()
{
    int a=10;
    void *vp;
    vp=&a;
    printf("%d\n",*(int *)vp);
    return 0;
}
