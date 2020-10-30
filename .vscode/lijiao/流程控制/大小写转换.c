//大小写转换
#include <stdio.h>
int main()
{
    char a,b;
    
    scanf("%c",&a);
    if(a>65 && a<90)
    b=a+32;
    else
    {
    if(a<121 && a>97) b=a-32;
    else
    {
        printf("%c",a);
    }
    }
    printf("%c",b);
    return 0;
}