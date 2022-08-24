#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,flag=0;
    printf("enter a number ");
    scanf("%d",&n);
    for ( i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            flag=1;
            break;
        }
        
        
    }
    if(flag==1)
    printf("number is not a prime");
    else
    printf("number is prime");
    
    
    
    return 0;
}
