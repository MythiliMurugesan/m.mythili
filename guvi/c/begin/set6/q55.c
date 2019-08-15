#include <stdio.h>

int main()
{
    int a,b,product;
    scanf("%d%d",&a,&b);
    product=a*b;
    if(product%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

    return 0;
}
