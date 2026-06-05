#include<stdio.h>
int main()
{
	int i;
	i=11;
	loop:if(i<20)
	{
		printf("%d\n",i);
		i=i+2;
		goto loop;
	}
}
