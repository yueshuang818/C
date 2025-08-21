#include <stdio.h>
int main()
{
	int age = 0;
	printf("What is your name?"); 
	scanf("%d",&age);
	if(age>=18)
	printf("成年");
	else
	printf("未成年");
	return 0;

}
