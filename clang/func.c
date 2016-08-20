#include<stdio.h>

void add(int x,int y);
int main()
{
    int a,b;
    printf("enter a value:");
    scanf("%d",&a);
    printf("enter b value:");
    scanf("%d",&b);
    add(a,b);
    return 0;
}
void add(int x,int y)
{

    int sum=x+y;
    printf("Sum of %d and %d=%d\n",x,y,sum);
}
