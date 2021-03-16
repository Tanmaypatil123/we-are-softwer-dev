#include <stdio.h>
int main(int argc, char const *argv[])
{
    int number, n, a, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &number);
    n = number;
    while (n != 0)
    {
        a = n % 10;
        sum = sum+a * a * a;
        n = n / 10;
    }
    if (sum == number)
        printf("%d is armstrong number\n", number);
    else
        printf("The number is not armstrong number\n");

    return 0;
}
