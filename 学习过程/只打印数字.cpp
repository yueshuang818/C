#include <stdio.h>
int main()
{
    int a = 0; 
    while((a = getchar()) != EOF)
    {
    	if(a<'0'|| '9'<a)
    	{
		continue;
		}
   	    putchar(a);
    	
	}
	return 0;
}
