#include <stdio.h>
int main()
{
	int a=6%4;
	int b= 29;
	int c = 222;
	int d = 2;
	printf("%d\n",a);
	int e =a+b;
	int f = d++ +b;
	int r = --c +d;
	printf("%d %d %d %d %d %d %d\n",b,c,d,e,f,r);
	
	
	return 0;
 } 
