#include<stdio.h>
struct student
{
    char a[10];
    int roll;
    float percent;
};
int main()
{
    int i;
    struct student stu[3];
    for(i=0;i<3;i++)
    {
    	printf("Enter name/rollno:/percentage:\n");
    	scanf("%s%d%f",stu[i].a,&stu[i].roll,&stu[i].percent);
    }
    for(i=0;i<3;i++)
    {
    	printf("Student name: %s\n Roll number:%d\n Percentage:%f\n",stu[i].a,stu[i].roll,stu[i].percent);
    }
return 0;
}
