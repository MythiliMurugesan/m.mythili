#include <stdio.h>

int main()
{
    int n,num=0,i,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        num=(num*10)+(n%10);
        n=n/10;
        c=c+1;
    }
    printf("%d",c);
    return 0;
}
