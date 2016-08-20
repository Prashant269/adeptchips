#include<stdio.h>
int main()
{
    int choice,a,b;
    printf("enter a and b values");
    scanf("%d %d",&a,&b);
    printf("enter ur choice");
    scanf("%d",&choice);
    switch(choice)
    {
	case '+':
	    printf("sum is=%d\n",a+b);
	    break;
	case 2:
	    printf("subtraction is=%d\n",a-b);
	    break;
	case 3:
	    printf("multiplication is =%d\n",a*b);
	    break;
	default:
	    printf("wrong choice\n");
    }
    return 0;
}
