//冰箱温度
#include <stdio.h>
int main()
{
    float h,m,t,j;
    
    scanf("%f %f",&h,&m);
    t=h+m/60;
    j=(4*t*t)/(t+2)-20;
    printf("%.2f",j);
    return 0;
}