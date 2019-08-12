    #include<stdio.h>
    int main()
    {
    int n[10],k,i,s=0;
    scanf("%d%d",&n,&k);
    for(i=0;n[i]!=0;i++)
    {
      scanf("%d",&n[i]);
    }
    for(i=0;i<=k;i++)
    {
        s=s+i;
    }
    printf("%d",s);
    return 0;
    }
