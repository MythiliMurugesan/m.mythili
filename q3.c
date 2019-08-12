#include<stdio.h>
int main()
{
char c;
scanf("%s",&c);
if(c!='a' && c!='z')
{
  printf("invalid");
}
else if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
printf("vowel");
}
else
{
printf("consonant");
}
return 0;
}
