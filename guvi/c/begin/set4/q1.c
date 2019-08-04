include <stdio.h>

int main()
{
    int i,c=0;
    char str[100];
    scanf("%[^\n]",&str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
