#include<stdio.h>

int F(int n)
{	
    if(n==1 || n==2)
	    return 1;
    else 
        return F(n-1) + F(n-2);
    
}   
int main()
{	
	int n;
    int i;
    scanf("%d",&n);
    
        for(i=2;i<=F(n);i++)
    {
        if(F(n)%i==0) 
        break;      
    }
    if(i==F(n)) printf("yes");
    else printf("%d",F(n));
    
    
    
	return 0;
}