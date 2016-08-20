#include<stdio.h>
# define len 10
# define n 5
int main()
{
    char a[5][10]={ {"white"},{"red"},{"green"},{"blue"},{"orange"}};
    int i;
    for(i=0;i<n;i++)
    {
	printf("Address:%p\t",a[i]);
	printf("String=%s\n",a[i]);
    }
    return 0;
}


