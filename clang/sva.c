#include<stdio.h>
struct student
{
    char a[10];
    int roll;
    int percent;
};
  
void disp(struct student );
   
int main(void)
{
    struct student stu;
    disp(stu);
    return 0;
}
void disp(struct student stu)
{
    printf("enter Student details:\n");
    printf("Enter Student name/Rollnumber/Percentage");
    scanf("%s",stu.a);
    scanf("%d",&stu.roll);
    scanf("%d",&stu.percent);
    printf("Enter Student name:%s\n Rollnumber:%d\nPercentage:%d\n",stu.a,stu.roll,stu.percent);
}
