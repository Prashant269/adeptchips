#include<stdio.h>
#include<string.h>
int main()
{
    char str[10]="12345";
    int x;
    sscanf(str,"%d",&x);
    printf("%d",x);
    return 0;
}
