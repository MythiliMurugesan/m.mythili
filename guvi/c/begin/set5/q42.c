#include <stdio.h>

int main()
{
    int i,c=0,c1=0;
    char str1[50],str2[50];
    scanf("%s%s",&str1,&str2);
    for(i=0;str1[i]!='\0';i++)
    {
        c=c+1;
    }
    for(i=0;str2[i]!='\0';i++)
    {
        c1=c1+1;
    }
    if(c>c1)
    {
        printf("%s",str1);
    }
    else
    {
        printf("%s",str2);
    }
    return 0;
}
