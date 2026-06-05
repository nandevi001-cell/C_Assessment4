#include<stdio.h>
int main()
{
	int i;
	i=1;
	loop:if(i<10)
	{
		printf("%d\n",i);
		i=i+2;
		goto loop;
	}
}
