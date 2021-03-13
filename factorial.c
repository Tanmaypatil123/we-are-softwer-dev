#include <stdio.h>
int factorial(int number)
{
    if (number==0 || number==1)
    {
        return 1;
    }
    else{
        return(number*(factorial(number-1)));
    }
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the value of number: ");
    scanf("%d", &num);
    printf("the factorial of %d is %d\n", num, factorial(num));
    return 0;
}

