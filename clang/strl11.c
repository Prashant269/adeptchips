#include<stdio.h>

int strcomp(char*str1,char*str2)
{
    int i;

    for(i = 0; str1[i] != 0 && str2[i] != 0  && str1[i] == str2[i] ;i++);

    return str1[i] - str2[i];
}

int main()
{
    while(1)
    {

	char str1[100], str2[100];

    	printf("Enter the string1 : ");
    	scanf("%s",str1);
    	printf("Enter the string2 : ");
    	scanf("%s",str2);
	if(strcomp(str1,str2) == 0)
	{
	    printf("Strings are matched\n");
	}
	else
	{
	    printf("Strings are not matched\n");
	}
    }
    return 0;
}

