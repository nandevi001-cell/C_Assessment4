#include<stdio.h>

int main()
{
    int num, i = 2, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

loop:
    if(i < num)
    {
        if(num % i == 0)
            prime = 0;

        i++;
        goto loop;
    }

    if(prime == 1 && num > 1)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
