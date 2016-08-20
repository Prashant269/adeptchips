#include<stdio.h>
#include<string.h>
int fun(char a[]);
int main()
{
    char b[]="hello";
    int count=0,i;
    fun(a);
    //ptr =b;
   
    /*for( ;*ptr!='\0';ptr++)
    {
       count++;
       printf("%c",*ptr);
    }*/
   for(i=0;b[i];i++)
       {
       	   count++;
       	   printf("%c",b[i]);
       	   
       	   }
    printf("%d\n",count);
    return 0;
}


