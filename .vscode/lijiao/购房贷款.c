//购房贷款
#include<stdio.h>
#include<math.h>


int main()
{
    float a,b,c,d,e,f,x;
    scanf("%f %f %f",&a,&b,&c);
    d = log(b);
    e = log(b-a*c);
    f = log(1+c);
    x = (d-e)/f;
    printf("%.2f",x);
    return 0;
}