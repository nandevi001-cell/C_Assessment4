#include<stdio.h>
int main()
{
	int i;
	i=5;
	loop:if(i>0)
	{
		printf("%d\n",i);
		i=i-1;
		goto loop;
	}
	
}
