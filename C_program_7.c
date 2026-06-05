#include<stdio.h>
int main()
{
	int i,sum;
	i=11;
	int tens,ones;
	loop:if(i<=99)
	{
		tens=i/10;
		ones=i%10;
		if((tens+ones==7)&&(i%2!=0))
		{
			printf("%d\n",i);
		}
		i=i+2;
		goto loop;
	}
}
