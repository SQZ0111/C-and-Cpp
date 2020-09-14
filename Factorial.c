#include <stdio.h>

int factorial(int number)
{
    int factor = 1;
    for (int i = number; i > 1; i--)
    {
        factor *= i;
    }
    return factor;
}
int main()
{
    int input;

    printf("Put in your number\n");
    scanf("%d",&input);
    for (int k = input; k > 1; k--)
    {
        printf("The factorial of %d is %d\n",input, factorial(k));
    }
    return 0;
}