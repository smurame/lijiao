//电梯价格
#include <stdio.h>
int main ()
{
    float a,b;
    scanf("%f",&a);
    if(a <= 110)
    
        b=0.5*a;
        
    
    else
    {
        if(a > 110 &&a <= 210)
        
            b=(a-110)*0.55+55;
        else
        {
            b=(a-210)*0.7+110;
        }
        
    }   
    printf("%.2f",b);
    return 0;
}