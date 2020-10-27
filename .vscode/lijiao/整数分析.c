//整数输出
#include <stdio.h>
int main()
{
    int a ,b ,c,d,e,f,g,h,i,max,min;
    scanf("%d",&a);
    if(a>=10000000)
    {
    b=a/10000000;
    c=(a-10000000*b)/1000000;
    d=(a-10000000*b-1000000*c)/100000;
    e=(a-10000000*b-1000000*c-100000*d)/10000;
    f=(a-10000000*b-1000000*c-100000*d-10000*e)/1000;
    g=(a-10000000*b-1000000*c-100000*d-10000*e-1000*f)/100;
    h=(a-10000000*b-1000000*c-100000*d-10000*e-1000*f-100*g)/10;
    i=a-10000000*b-1000000*c-100000*d-10000*e-1000*f-100*g-10*h;
    if(b>c) max=b;
    else max=c;
    if(max<d) max=d;
    else max=max;
    if(max<e) max=e;
    else max=max;
    if(max<f) max=f;
    else max=max;
    if(max<g) max=g;
    else max=max;
    if(max<h) max=h;
    else max=max;
    if(max<i) max=i;
    else max=max;

    if(b<c) min=b;
    else min=c;
    if(min>d) min=d;
    else min=min;
    if(min>e) min=e;
    else min=min;
    if(min>f) min=f;
    else min=min;
    if(min>g) min=g;
    else min=min;
    if(min>h) min=h;
    else min=min;
    if(min>i) min=i;
    else min=min;

    printf("8 %d %d",max,min);
    }
    else
    {
    if(a>=1000000 && a<10000000)
    {
    b=a/1000000;
    c=(a-1000000*b)/100000;
    d=(a-1000000*b-100000*c)/10000;
    e=(a-1000000*b-100000*c-10000*d)/1000;
    f=(a-1000000*b-100000*c-10000*d-1000*e)/100;
    g=(a-1000000*b-100000*c-10000*d-1000*e-100*f)/10;
    h=a-1000000*b-100000*c-10000*d-1000*e-100*f-10*g;
    
    if(b>c) max=b;
    else max=c;
    if(max<d) max=d;
    else max=max;
    if(max<e) max=e;
    else max=max;
    if(max<f) max=f;
    else max=max;
    if(max<g) max=g;
    else max=max;
    if(max<h) max=h;
    else max=max;
    
    if(b<c) min=b;
    else min=c;
    if(min>d) min=d;
    else min=min;
    if(min>e) min=e;
    else min=min;
    if(min>f) min=f;
    else min=min;
    if(min>g) min=g;
    else min=min;
    if(min>h) min=h;
    else min=min;
    
    printf("7 %d %d",max,min);
    }
    else
    {
    if(a>=100000 && a<1000000)
    {
    b=a/100000;
    c=(a-100000*b)/10000;
    d=(a-100000*b-10000*c)/1000;
    e=(a-100000*b-10000*c-1000*d)/100;
    f=(a-100000*b-10000*c-1000*d-100*e)/10;
    g=a-100000*b-10000*c-1000*d-100*e-10*f;
    
    
    if(b>c) max=b;
    else max=c;
    if(max<d) max=d;
    else max=max;
    if(max<e) max=e;
    else max=max;
    if(max<f) max=f;
    else max=max;
    if(max<g) max=g;
    else max=max;
    
    
    if(b<c) min=b;
    else min=c;
    if(min>d) min=d;
    else min=min;
    if(min>e) min=e;
    else min=min;
    if(min>f) min=f;
    else min=min;
    if(min>g) min=g;
    else min=min;
    
    
    printf("6 %d %d",max,min);
    }
    else
    {
    if(a>=10000 && a<100000)
    {
    b=a/10000;
    c=(a-10000*b)/1000;
    d=(a-10000*b-1000*c)/100;
    e=(a-10000*b-1000*c-100*d)/10;
    f=a-10000*b-1000*c-100*d-10*e;
    
   
    
    if(b>c) max=b;
    else max=c;
    if(max<d) max=d;
    else max=max;
    if(max<e) max=e;
    else max=max;
    if(max<f) max=f;
    else max=max;
    
    
    if(b<c) min=b;
    else min=c;
    if(min>d) min=d;
    else min=min;
    if(min>e) min=e;
    else min=min;
    if(min>f) min=f;
    else min=min;
    
    
    
    printf("5 %d %d",max,min);
    }
    else
    {
    if(a>=1000 && a<10000)
    {
    b=a/1000;
    c=(a-1000*b)/100;
    d=(a-1000*b-100*c)/10;
    e=a-1000*b-100*c-10*d;
   
    
   
    
    if(b>c) max=b;
    else max=c;
    if(max<d) max=d;
    else max=max;
    if(max<e) max=e;
    else max=max;
    
    
    
    if(b<c) min=b;
    else min=c;
    if(min>d) min=d;
    else min=min;
    if(min>e) min=e;
    else min=min;
    
    
    
    
    printf("4 %d %d",max,min);
    }
    else
    {
    if(a>=100 && a<1000)
    {
    b=a/100;
    c=(a-100*b)/10;
    d=a-100*b-10*c;
    
   
    
   
    
    if(b>c) max=b;
    else max=c;
    if(max<d) max=d;
    else max=max;
    
    
    
    
    if(b<c) min=b;
    else min=c;
    if(min>d) min=d;
    else min=min;
    
    
    
    
    printf("3 %d %d",max,min);
    }
    else
    {
    if(a>=10 && a<100)
    {
    b=a/10;
    c=a-10*b;
    
    
   
    
   
    
    if(b>c) max=b;
    else max=c;
    
    
    
    
    
    if(b<c) min=b;
    else min=c;
    
    
    
    
    
    printf("2 %d %d",max,min);
    }
    else
    {
        printf("1 %d %d",a,a);
    }
    
    }
    
    }
    
    }
    
    }
    
    }
    }
    
    

    return 0;
}   