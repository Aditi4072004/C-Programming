#include<stdio.h>
#include<conio.h>
void main()
{
int row,col;
for(row=0;row<7;row++)
{
for(col=0;col<5;col++)
{
if(((col==0 || col==4)&& row!=0)||((row==0 || row==3)&&(col>0 && col<4)))
printf("*");
else
printf(" ");
}
printf("\n");
}
}
