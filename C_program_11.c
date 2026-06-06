#include<stdio.h>
int main()
{
    int num, count = 0;
	printf("Enter a number: ");
    scanf("%d", &num);
	
	loop:if(num > 0)
    {
        count = count + 1;
        num = num / 10;
        goto loop;
    }
	printf("Total digits = %d", count);
}
