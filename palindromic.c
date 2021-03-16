#include<stdio.h>
int main(int argc, char const *argv[])
{
    long int num,rev=0;
    int n,r;
    printf("Enter any number:");
    scanf("%d",&num);
    n=num;
    while (n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if (num==rev)
    printf("%d is palindromic number",num);
    else
    printf("%d is not palindromic number",num);

    return 0;
}
