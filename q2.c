#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
scanf("%d",&n);
if(n<0)
{
printf("invalid");
}
else if(n%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}
