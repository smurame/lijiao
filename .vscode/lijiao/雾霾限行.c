//雾霾限行
#include <stdio.h>
int main()
{
    int a,b,c,d,e,x,y,f;
    
    scanf("%d %d %d",&a,&b,&c);
    f=c/10000;
    d=(c-10000*f)/1000;
    e=(c-10000*f-1000*d)/100;
    x=(c-10000*f-1000*d-100*e)/10;
    y=c-10000*f-1000*d-100*e-10*x;
    
    if(a==6 || a==7 || b < 200) 
    {
       
        printf("%d no",y);
    }
    else
    {
        if(200 <= b && b <= 400)
        {
        if(a==1 && y==1 || y==6)
        printf("%d yes",y);
        else
        {

            if(a==2 && y==2 || a==2 && y==7)
            printf("%d yes",y);
        else
        {
            if(a==3 && y==3 || a==3 && y==8)
            printf("%d yes",y);
        else
        {
            if(a==4 && y==4 || a==4 && y==9)
            printf("%d yes",y);
        else
        {
            if(a==5 && y==5 || a==5 && y==0)
            printf("%d yes",y);
        else
            printf("%d no",y);
        }
        }
        }  
        }
        }
        else 
        {
            if(a==1 && y==1 || a==1 && y==3 || a==1 && y==5 || a==1 && y==7 || a==1 && y==9 || a==3 && y==1 || a==3 && y==3 || a==3 && y==5 || a==3 && y==7 || a==3 && y==9 || a==5 && y==1 || a==5 && y==3 || a==5 && y==5 || a==5 && y==7 || a==5 && y==9)
            printf("%d yes",y);
            else
            {
                if(a==2 && y==2 || a==2 && y==6 || a==2 && y==8 || a==2 && y==0 ||a==4 && y==2 || a==4 && y==6 || a==4 && y==8 || a==4 && y==0)
                printf("%d yes",y);
                else
                {
                    printf("%d no",y);
                }
                
            }
            
        }
    }    
        
       
    return 0;
}