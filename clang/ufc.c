#include<stdio.h>
void drawline();
int main(void)
{
  drawline();
  return 0;
}
void drawline(void)
{
  
    int i;
    for(i=1;i<=50;i++)
    {
    	printf("--");
    }
     printf("\n");
}
