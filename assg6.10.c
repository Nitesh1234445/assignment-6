#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,x;
    printf("enter a number ");
    scanf("%d",&a);
    while (a!=0)
    {
        x=x*10+a%10;
        a=a/10;

    }

    printf("reverse of number is %d",x);

    
    return 0;
}
