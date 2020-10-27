//三角形判断
#include <stdio.h>
int main()
{
    int a,b,c,d;
    
    scanf("%d %d %d",&a,&b,&c);
    if(a*a+b*b==c*c)
    {
        d=a*b;
        printf("%d",d);
    }
    else printf("no");
   
    return 0;
}