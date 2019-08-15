#include <stdio.h>


int power_of_2(unsigned int);

int count=0,n;

void main()

{

    int num;
    
    scanf("%d",&num);
    
    power_of_2(num);
    
    if(count==1)
    
    {
        
        printf("yes");
    
    }
    
    else
    
    {
       
        printf("no");
    
    }

}
    
int power_of_2(unsigned int num)
    
{
        
while(num!=0)
       
{
           
n=num%2;
           
 if(n==1)
                
count++;
           
num=num/2;    
     
}
 
}
