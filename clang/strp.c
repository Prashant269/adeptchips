#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *str;
    str=(char *)malloc(10);
    printf("enter the string:");
    scanf("%s",str);
    printf("The String is %s\n",str);
    return 0;
}
