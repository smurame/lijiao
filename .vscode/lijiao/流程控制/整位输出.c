//整位输出
#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    
    scanf("%d",&a);
    b=a/10000;
    c=(a-10000*b)/1000;
    d=(a-10000*b-1000*c)/100;
    e=(a-10000*b-1000*c-100*d)/10;
    f=a-10000*b-1000*c-100*d-10*e;
    printf("%d %d %d %d %d",b,c,d,e,f);
    return 0;
}