#include<stdio.h>
struct student
{
    char a[10];
    int  roll;
    struct marks
    {
	int percentage;
    }var1;
}var2;
int main()
{
    printf("enter student details:/Student name:/Roll number:/ Percetage:\n");
    scanf("%s%d%d",var2.a,&var2.roll,&var2.var1.percentage);
    printf("Student name is:%s\n Roll No:%d\n Percentage:%d\n ",var2.a,var2.roll,var2.var1.percentage);
    return 0;
}

