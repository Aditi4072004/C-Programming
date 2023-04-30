#include<stdio.h>
#include<conio.h>
void main()
{
    int num,c=0;
    printf("enter the number: ");
    scanf("%d",&num);
    while(num!=0)
    {
       num=num/10;
       c++;
    }
        printf("Number of digits: %d",c);
}
