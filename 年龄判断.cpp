#include <stdio.h>
int main()
{
	int age = 0;
	printf("����һ������\n");
	scanf("%d",&age);
	if(age<18)
	printf("����");
	else if(age<=44)
	printf("����");
	else if(age<=59)
	printf("������");
	else if(age<=89)
	printf("����");
	else
	printf("������");
	 
	 
	return 0;
}
