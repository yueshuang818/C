#include <stdio.h>
#include <math.h>
#include <complex.h>
int main()
{
	double a,b,c;
	double delta;
	double complex x1,x2;
	printf("一元二次方程以降幂排列的顺序的系数a，b，c,以空格隔开\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a==0)
	printf("这不是一元二次方程");
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

