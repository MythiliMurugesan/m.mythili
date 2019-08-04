#include <stdio.h>

int main()
{
    int i,l=1;
    char str[100];
    scanf("%[^\n]",&str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='.')
        {
            l++;
        }
    }
    printf("%d",l);
    return 0;
}
