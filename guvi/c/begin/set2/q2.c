    #include<stdio.h>
    int main()
    {
    int n,reverse=0,original,remainder;
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    if(original==reverse)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
