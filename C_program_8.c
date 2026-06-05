#include<stdio.h>
int main()
{
	int i,sum,tens,ones;
	i=12;
	sum=0;
	loop:if(i<=99)
	{
		tens=i/10;
		ones=i%10;
		if((tens+ones==6)&&(i%2==0))
		{
			printf("%d\n",i);
		}
		i=i+2;
		goto loop;
	}
	
}
