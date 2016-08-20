#include<stdio.h>
int main()
{
    int i,*ptr,a[5]={10,20,30,40,50};
     ptr=a;
    printf("The array elements are:\n ");
    for(i=0;i<5;i++)
    {
    	printf("%d\t",*(ptr+i));
    
    }
    printf("\n");
     
    return 0;
}
