#include <stdio.h>

int main()
{
    int i,s=0;
    char str[100];
    scanf("%[^\n]",&str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            s++;
        }
    }
    printf("%d",s);
    return 0;
}
