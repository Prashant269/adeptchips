#include<stdio.h>
struct student
{
    char a[10];
    int roll;
    float percent[1];
};
int main(void)
{
    int i,j;
    struct student st[3];
    for(i=0;i<3;i++)
    {
	printf("Enter name/roll\n");
	scanf("%s%d",st[i].a,&st[i].roll);

	for(j=0;j<1;j++)
	{
	    printf("Enter student Percentage:\n");
	    scanf("%f",&st[i].percent[j]);
	}
    }
    for(i=0;i<3;i++)
    {
	printf("Student name:%s\n Roll number:%d\n ",st[i].a,st[i].roll);

	for(j=0;j<1;j++)
	{
	    printf("Percentage:%f\n",st[i].percent[j]);
	}
    }
}
