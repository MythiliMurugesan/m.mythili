    #include<stdio.h>
    int main()
    {
    int n,s[5],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t%d\n",s[i],i);
    }
    return 0;
    }
