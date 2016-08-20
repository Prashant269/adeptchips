#include<stdio.h>
struct student
{
    char a[10];
    int roll;
    int percent;
};
int main()
{
    struct student stu;
    struct student *ptr=&stu;
    printf("Enter student Name/roll/percent:\n");
    scanf("%s",(ptr->a));
    scanf("%d",&(ptr->roll));
    scanf("%d",&(ptr->percent));
    printf("The Student Details :\n");
    printf("Student name :%s\n",ptr->a);
    printf("Roll number :%d\n",ptr->roll);
    printf("Percentage :%d\n",ptr->percent);
    return 0;
}
