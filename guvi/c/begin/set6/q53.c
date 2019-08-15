#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,sum=0;
clrscr();
scanf("%d",&n);
while(n>0)
{
m=n%10;
sum=sum+m;
n=n/10;
}
printf("%d",sum);
getch();
}
