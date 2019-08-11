#include <stdio.h>

int main()
{
    int i,n,f0=0,f1=1,fib;
    scanf("%d",&n);
    printf("%d",f1);
    for(i=1;i<n;i++)
    {
        fib=f0+f1;
        f0=f1;
        f1=fib;
        printf("%d",fib);
    }

    return 0;
}
