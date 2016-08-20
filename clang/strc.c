#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int roll;
    float percent;
};
int main()
{
    struct student stu1;
    struct student stu2;
    struct student stu3;

    printf("Details of the first student:");
    scanf("%s%d%f",stu1.name,&stu1.roll,&stu1.percent);
    printf("Details of the second student:");
    scanf("%s%d%f",stu2.name,&stu2.roll,&stu2.percent);
    printf("Details of the Third student:");
    scanf("%s%d%f",stu3.name,&stu3.roll,&stu3.percent);
    printf("Student name is :%s\n Roll No is:%d\n Percentage is :%f\n ",stu1.name,stu1.roll,stu1.percent);
    printf("Student name is :%s\n Roll No is:%d\n Percentage is :%f\n ",stu2.name,stu2.roll,stu2.percent);
    printf("Student name is :%s\n Roll No is:%d\n Percentage is :%f\n ",stu3.name,stu3.roll,stu3.percent);
    return 0;
}

