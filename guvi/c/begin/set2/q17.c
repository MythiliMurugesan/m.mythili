    #include<stdio.h>
    int main()
    {
    int n,originalnumber,remainder,result=0;
    scanf("%d",&n);
    originalnumber=n;
    while(originalnumber!=0)
    {
        remainder=originalnumber%10;
        result=result+remainder*remainder*remainder;
        originalnumber=originalnumber/10;
    }
    if(result==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
    }
