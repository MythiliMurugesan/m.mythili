#include <stdio.h>

int main()
{
     int i,spec=0;
    char str[100];
    scanf("%[^\n]",&str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>=27 && str[i]<=47)||(str[i]>=58 && str[i]<=64)||(str[i]>=91 && str[i]<=96)||(str[i]>=123 && str[i]<=127)) 
        {
            spec++;
        }
    }
    printf("%d",spec);
   
    return 0;
}
