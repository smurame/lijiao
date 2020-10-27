#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e,f,i,m,n,h=0;
	scanf("%d %d",&a,&b);
    if(a>b)
    {
        m=a;
        n=b;
    }
    else
    {
        m=b;
        n=a;
    }
    for(i=100;i<=m;i++)
    {
        c=i/1000;
        d=(i-1000*c)/100;
        e=(i-1000*c-100*d)/10;
        f=i%10;
	    if(i>=100 && i<1000) 
        {
            if(i==c+pow(d,3)+pow(e,3)+pow(f,3)) h=h+1;
            else h=h+0;
        }
        else
        {
            if(i>=1000 && i==c+pow(d,4)+pow(e,4)+pow(f,4)) h=h+1;
            else h=h+0;
        }
        printf("%d %d %d %d\n",c,d,e,f); 
    }
	printf("%d\n",h);
    
	return 0;
}