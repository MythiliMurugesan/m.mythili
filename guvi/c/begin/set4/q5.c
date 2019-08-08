#include <stdio.h>

int main()
{
    int i,digit=0;
    char str[100];
    scanf("%[^\n]",&str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0' && str[i]<='9') 
        {
            digit++;
        }
    }
    printf("%d",digit);
    return 0;
}
