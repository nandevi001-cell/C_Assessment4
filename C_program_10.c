#include<stdio.h>
int main()
{
	int i,sum,tens,ones;
	i=71;
	sum=0;
	loop:if(i<80)
	{
		tens=i/10;
		if((tens==7)&&(i%2!=0))
		sum=sum+i;
		i=i+2;
		goto loop;
	}
	printf("%d\n",sum);
}
