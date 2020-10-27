#include<stdio.h>
int main()
{
    int b[10];
    int c[10];
    int i;
    //scanf("%d\n",&a);
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",b[i]);
        c[i]=b[i]/1000+(b[i]-b[i]/1000*1000)/100+(b[i]-b[i]/100*100)/10+b[i]%10;
        //if(c[i]>max) max=c[i];
        //else max=max;
        printf("%d %d\n",b[i],c[i]);
    }
   
    
    return 0;
}
