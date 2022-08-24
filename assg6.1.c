#include<stdio.h>
int main(int argc, char const *argv[])
{
    int s,n,i;
    printf("enter a number ");
    scanf("%d",&n);
    for ( i = 1,s=0; i <= n; i++)
    {
        s=s+i;

    }
    printf("%d",s);
    
    return 0;
}
