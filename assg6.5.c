#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,s=0;
    printf("enter a number ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        s=s+i*i*i;

    }
    printf("%d",s);

    
    return 0;
}
