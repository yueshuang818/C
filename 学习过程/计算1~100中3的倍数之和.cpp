#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0; 
	for(a=1;a<=100;a++)
	{
		if(a%3==0)
		b+=a;
	
	}
	printf("%d",b);
	return 0;
 } 
