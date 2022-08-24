#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,s=1;
    printf("enter a number ");
    scanf("%d",&n);
    for ( i = n; i >= 1; i--)
    {
        s=s*i;

    }
    printf("%d",s);

    
    return 0;
}
