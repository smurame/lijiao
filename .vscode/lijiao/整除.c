//整除
#include <stdio.h>
int main()
{
    int a,b,d,e;
    
    scanf("%d %d",&a,&b);
    if(a%b==0) 
    {
       
        printf("yes");
    }
    else
    {
        d=a/b;
        e=a-b*d;
        printf("%d %d",d,e);
    }
    
    
    return 0;
}