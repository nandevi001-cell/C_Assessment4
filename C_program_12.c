#include<stdio.h>
int main()
{
    int num, sum = 0,digit;
	printf("Enter a number: ");
    scanf("%d", &num);
	
	loop:if(num > 0)
    {
        digit = num%10;
        sum=sum+digit;
        num=num/10;
        goto loop;
    }
	printf("Sum = %d",sum);
}
