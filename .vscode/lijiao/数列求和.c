#include <stdio.h>
int main()
{
    float a[29],b[29],c[29],d,e=0;
    int i;
    scanf("%f",&d);
    b[0]=1;
    b[1]=2;
    a[0]=2;
    a[1]=3;
    
    
    for(i=2;i<d;i++)
    {
        b[i]=b[i-1]+b[i-2];
        a[i]=a[i-1]+a[i-2];

    }
    
    
    
    for(i=0;i<d;i++)
    {
        c[i]=a[i]/b[i];
        e=e+c[i];
    }
    
   
    
    
    printf("%.2f",e);
    return 0;
}