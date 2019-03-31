    #include<stdio.h>
    #include<math.h>
    int main()
    {
    int n,a,d,i,tn,sum=0;
    scanf("%d%d%d",&n,&a,&d);
    sum=(n*(2*a+(n-1)*d))/2;
    tn=a+(n-1)*d;
    for(i=a;i<=tn;i=i+d)
    {
        if(i!=tn)
        printf("%d+",i);
        else
        printf("%d=%d",i,sum);
    }
    return 0;
    }
