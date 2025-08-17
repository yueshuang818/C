#include <stdio.h>
int main()
{
	int ch = 0;
	while((ch = getchar()) ==' ')
	{
		;
	}
	printf("%c\n",ch);
	float a ;
	printf("What is your birthday?\n");
	scanf("%f",&a);
	printf("Your birthfay is %.2f\n",a);
	int year;
	int month;
	int day;
	scanf("%d%*c%d%*c%d%*c",&year,&month,&day);
	printf("%d %d %d",year,month,day);
	return 0;
}
