#include<stdio.h>

int main()
{
	float a,b,c;
	for(a=0;a<=3;a++)
	{
		for(b=0;b<=4;b++)
		
	    {
	        for(c=0;c<=5;c++)
		    {
		
		        if(a+b+c==8) 	printf("%.0f %.0f %.0f\n",a,b,c);
    	
	        } 
	    }
	}
	return 0;
}