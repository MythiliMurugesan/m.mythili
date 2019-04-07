    #include<stdio.h>
    int main()
    {
    int i;
    int str[5];
    for(i=0;i<5;i++)
    scanf("%d",&str[i]);
    for(i=0;str[0]!='\0';i++)
    {
        if(str[i]==isalpha(str[i]))
        {
        printf("yes");
        }
        else if(str[i]==isdigit(str[i]))
        {
        printf("yes");
        }
        else
        {
        printf("no");
        }
    }
    return 0;
    }

