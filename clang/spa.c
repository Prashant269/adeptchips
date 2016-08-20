#include<stdio.h>
struct student
{
    char a[10];
    int roll;
    int percent;
};
void disp(struct student *stu);
int main()
{
    struct student stu ;
    printf("Student details:\n");
    disp(&stu);
    return 0;
}
void disp(struct student *stu)
{
   printf("Enter  student name /roll number/percentage:\n"); 
   scanf("%s%d%d",(stu->a),&(stu->roll),&(stu->percent));
   printf("Student name:%s\t Roll number:%d\t Percentage:%d\t\n",stu->a,stu->roll,stu->percent);
}


