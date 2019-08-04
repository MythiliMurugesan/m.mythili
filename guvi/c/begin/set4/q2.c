#include <stdio.h>

int main()
{
    int i,wrd=1;
    char str[100];
    scanf("%[^\n]",&str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            wrd++;
        }
    }
    printf("%d",wrd);
    return 0;
}
