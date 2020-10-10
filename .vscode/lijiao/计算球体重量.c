//计算球体重量
#include <stdio.h>
#define PI 3.1415926
int main()
{
    float a,b,c,d,e,f;
    
    scanf("%f %f",&a,&b);
    c=a/20;
    d=b/20;
    e=4.0/3.0*PI*c*c*c*7.86;
    f=4.0/3.0*PI*d*d*d*19.3;
    
    printf("%.3f %.3f",e,f);
    return 0;
}