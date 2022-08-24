#include<stdio.h>
int main(int argc, char const *argv[])
{
    int count=0,n;
    printf("enter a number ");
    scanf("%d",&n);
    while (n!=0)
    {
        n=n/10;
        count++;

    }
    printf("%d",count);

    
    return 0;
}
