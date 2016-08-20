#include<stdio.h>
int main()
{
    float a=5;
    void *vp;
    vp=&a;
    printf("%f\n",*(float *)vp);
    return 0;
}
