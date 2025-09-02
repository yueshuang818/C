#include <stdio.h>
int main ()
{
	int a,b,c;
	for(a=100;a<=200;a++)
	{
		c=1;
	for(b=2;b<a;b++)
	{
		if(a%b==0)
		{
		c=0;
		break;
	}
	}
	if(c==1)
	printf("%d ",a);
	}
	return 0;
}
