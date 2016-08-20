#include<stdio.h>
void disp(char a[]);
int main()
{
    char b[10];
    printf("enter the String:");
    scanf("%s",b);
    disp(b);
    return 0;
}
void disp(char a[])
{
   
    printf(" The string output:");
    puts(a);
   
}
