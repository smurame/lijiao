//小明检测作业
#include <stdio.h>
int main()
{
    int a,b,d,e;
    
    scanf("%d %d %d %d",&a,&b,&d,&e);
    if(b*d+e==a) 
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