#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10];
    strncpy(str1,"department",6);
    printf("%s\n",str1);
    strncpy(str1,"dep",6);
    printf("%s\n",str1);
    return 0;
}


