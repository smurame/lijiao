//温度转换
#include <stdio.h>
int main()
{
    float a,b;
    
    scanf("%f",&a);
    b=(a-32)*5/9;
    printf("%.2f",b);
    return 0;
}