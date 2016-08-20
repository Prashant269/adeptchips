#include<stdio.h>
struct student
{
    char a[10];
    int roll;
    int percentage;
};
void disp(struct student st[]);
int main()
{
    struct student st[3];
    disp(st);
    return 0;
}
void disp(struct student st[])
{
    int i;
    printf("Enter the student details :\n");
    for(i=0;i<=2;i++)
    {
    	printf("Enter the Student name/Roll number/Percentage:\n");
	scanf("%s%d%d",st[i].a,&st[i].roll,&st[i].percentage);
    }
    printf("The entered student details are:\n");
    for(i=0;i<=2;i++)
    {
	printf("Student Name :%s Roll number:%d Percentage:%d\n",st[i].a,st[i].roll,st[i].percentage);
    }
}


