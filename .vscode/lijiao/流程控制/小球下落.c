#include<stdio.h>
#include<math.h>
int main()
{
	float a,s,h;
	scanf("%f",&a);
	s=100+200*(1-pow(0.5,a-1));
	h=100*pow(0.5,a);
	printf("s=%.3f h=%.3f",s,h);
	return 0;
}