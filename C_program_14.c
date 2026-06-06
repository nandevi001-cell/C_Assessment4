#include<stdio.h>

int main()
{
    int num, temp, first, last, digits = 0, power = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = num % 10;

    while(temp >= 10)
    {
        temp = temp / 10;
        digits++;
        power = power * 10;
    }

    first = temp;

    middle = (num % power) / 10;

    result = last * power + middle * 10 + first;

    printf("%d", result);

}
