#include <stdio.h>

int main()
{
    int n,c;
    scanf("%d",&n);
    for(c=0;n!='\0';c++)
    {
        n=n/10;
    }
    printf("%d",c);
    return 0;
}
