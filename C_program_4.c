#include<stdio.h>
int main()
{
	int i,sum;
	i=6;
	sum=0;
	loop:if(i>0)
	{
		sum=sum+i;
		i=i-1;
		goto loop;
	}
	printf("Sum=%d",sum);
	
}
