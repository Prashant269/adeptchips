#include<stdio.h>
#include<string.h>
int main()
{
    char *arr[5]={"red","yellow","green","blue","white"};
    int i,j;
    char *temp;
    printf("Array of the String before Sorting:\n ");

    for(i=0;i<=4;i++)
    {
	printf("%s\t",arr[i]);
    }
    for(i=0;i<4;i++)
    {
	for(j=i+1;j<=4;j++)
	{
	    if(strcmp(arr[i],arr[j])<0)
	    {
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	    }
	}
    }
    printf("\n");
    printf("The Array of Strings After Sorting:\n");
    for(i=0;i<=4;i++)
    {
	printf("%s\t",arr[i]);
    
   }
    printf("\n");
    return 0;
}
