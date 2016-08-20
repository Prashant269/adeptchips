#include<stdio.h>
struct student
{
    char a[10];
    int roll;
    int percent;
};
    struct student stu;
void disp(char a[10],int roll,int percernt);
int main(void)
{
   
    printf("Enter the student details:\n");
    printf("Student name/Rollnumber/Percetage:\n");
    disp(stu.a,stu.roll,stu.percent);
    printf("Student name:%s\n",stu.a);
    printf("Roll number:%d\n",stu.roll);
    printf("Percentage:%d\n",stu.percent);
    return 0;
}
void disp(char a[10],int roll,int percernt)
{
    scanf("%s",stu.a);
    scanf("%d",&stu.roll);
    scanf("%d",&stu.percent);
 }   

