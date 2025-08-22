#include <stdio.h>
int main()
{
	int age = 0;
	printf("输入一个年龄\n");
	scanf("%d",&age);
	if(age<18)
	printf("少年");
	else if(age<=44)
	printf("青年");
	else if(age<=59)
	printf("中老年");
	else if(age<=89)
	printf("老年");
	else
	printf("老寿星");
	 
	 
	return 0;
}
