#include<stdio.h>
int main ()
{
    int a,c,i;
    int b[1000];
    c=1;
    scanf("%d\n",&a);
    for ( i = 0; i < a-1; i++)
    {
        scanf("%d ",&b[i]);

    }
    for(i=0;i<a;i++)
    {
        if(b[i]==b[i+1]) c=c;
        else
        {
            c=c+1;
        }
        
    }
    printf("%d",c);
    return 0;
}