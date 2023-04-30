#include<stdio.h>
void main()
{
int math,phy,chem;
printf("enter the marks of math: ");
scanf("%d",&math);
printf("enter the marks of physic: ");
scanf("%d",&phy);
printf("enter the marks of chem: ");
scanf("%d",&chem);
if((math>=65 && phy>=55 && chem>=50 &&(math+phy+chem)>=190)||(math+phy)>=140)
    printf("candidate is eligible");
else
    printf("candidate is not eligible");











}
