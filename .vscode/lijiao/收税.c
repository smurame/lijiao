//收税
#include <stdio.h>
int main()
{
    //float b,c;
    float a,b,c;
    //float c;
    scanf("%f",&a);
    b=a-3500;
    if(b <= 1500 && b >= 1) c=a-b*0.03;
    else
    {
        if(b > 1500 && b <= 4500) c=a-45-(b-1500)*0.1;
        else
        {
            if(b > 4500 && b <= 9000) c=a-345-(b-4500)*0.2;
            else
            {
                if(b > 9000 && b <= 35000) c=a-1245-(b-9000)*0.25;
                else 
                {
                    if(b > 35000)  c=a-7745-(b-35000)*0.3;
                    else c=a;

                }
                    
                
                
            }
            
        }
        
    }
    
        
    
    
    printf("%.0f",c);
    return 0;
}