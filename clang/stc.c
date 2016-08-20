#include<stdio.h>
#include<string.h>
int main()
{
    char str1[25]="Prasanth";
    strncat(str1,".Vavilapalli",15);
    printf("%s\n",str1);
    return 0;
}
