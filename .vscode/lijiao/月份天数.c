//月份天数
#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    
    scanf("%d %d",&a,&b);
    d=a%100;
    e=b%2;
    if(a%100==0 && a%400==0 && b==2 || a%100!=0 && a%4==0 && b==2) c=29;
    else
    {
        if(b==2) c=28;
        else
     {
        if(b==1 || b==3 || b==5 || b==7 || b==8 || b==10 || b==12) c=31;
        else c=30;
     }
        

    }
   
    printf("%d",c);


    
    return 0;
}