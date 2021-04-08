#include<stdio.h>
#define MAXNUM 500
int main(int argc, char const *argv[])
{
    int sum=0;
    for (int i = 1; i <=MAXNUM; i++)
    {
        if (i%2==0)
        {
            sum+=i;
        }
    }
    printf("the sum of the even number between 1 and 500 is  %d",sum);
    
    return 0;
}
