#include<stdio.h>

int main()
{
    int a,b,i,min;
    scanf("%d %d",&a,&b);
    if(a<b) 
    {
    a=a;
    b=b;
    }
    else
    {
    min=b;
    b=a;
    a=min;
    }
    for(i=b;i>0;i--)
    
    if(a%i==0 && b%i==0) 
    {
    printf("%d ",i);
    break;
    }
    
    for(i=b;i<=a*b;i++)
    if(i%a==0 && i%b==0) 
    
    {
    printf("%d",i);
    break;
    }
    
    return 0;
}
