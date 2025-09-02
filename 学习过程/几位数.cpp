#include <stdio.h>
int main()
{
	int a;
	int b = 0;
	scanf("%d",&a);
	do
	{
		 a/=10;
		b++;
	}while(a);
	printf("%d\n",b);
	return 0;
 } 
