#include<stdio.h>
int main()
{
    int i,j,a[3][4];
   printf("enter the array elements ");
   for(i=0;i<3;i++)
    for(j=0;j<4;j++)
    {
    	scanf("%d",&a[i][j]);
    }
    for(i=0;i<3;i++)
    {
      for(j=0;j<4;j++)
      
      	  printf("%d",a[i][j]);
      	 printf("\n"); 

    }  
        printf("\n");
        return 0;
  }      

