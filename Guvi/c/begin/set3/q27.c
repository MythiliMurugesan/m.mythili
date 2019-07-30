#include <stdio.h>

int main()
{
    char str[20];
    int i;
    scanf("%s",str);
    for(i=0;i<='\0';i++)
    {
        if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
        {
            printf("no");
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            printf("digits");
        }
        else 
        {
            printf("no");
        }
    }
    

    return 0;
}
