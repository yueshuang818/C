#include <stdio.h>
int main()
{
	int arr[3][5];
	int a,b;
	for(a=0;a<3;a++)
	{
		for(b=0;b<5;b++)
		{
			scanf("%d",&arr[a][b]);
		}
	 } 
	for(a=0;a<3;a++)
	{
		for(b=0;b<5;b++)
		{
			printf("%d ",arr[a][b]);
		}
	 } 
	return 0;
}

