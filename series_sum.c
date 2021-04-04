#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    unsigned long int sum=0,n;
    printf("enter the number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    n=a;
    for (int  i = 0; i<b; i++)
    {
        sum+=n;
        n=n*10+a;
    }
    printf("%lu",sum);
    
    return 0;
}
