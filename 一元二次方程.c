#include <stdio.h>
#include <math.h>
#include <complex.h>
int main()
{
	double a,b,c;
	double delta;
	double complex x1,x2;
	printf("һԪ���η����Խ������е�˳���ϵ��a��b��c,�Կո����\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a==0)
	printf("�ⲻ��һԪ���η���");
	else
	{
	delta =b*b-4*a*c;
	if(delta>0)
	{
	x1=(-b+sqrt(delta))/(2*a);
	x2=(-b-sqrt(delta))/(2*a);
	printf("x1=%.6f,x2=%.6f",x1,x2);
}
    else if(delta==0)
    x1=x2=(-b)/(2*a);
    else
    {	
	x1=(-b+csqrt(delta))/(2*a);
	x2=(-b-csqrt(delta))/(2*a);
	printf("x1=%.6f+%.6fi,x2=%.6f+%.6fi",creal(x1),cimag(x1),creal(x2),cimag(x2));
	}
}
	return 0;
}

