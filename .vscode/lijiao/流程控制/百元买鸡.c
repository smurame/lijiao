#include<stdio.h>

int main()
{
	float a,b,c;
	for(a=0;a<=100;a++)
	{
		for(b=0;b<=100;b++)
		
	    {
	        for(c=0;c<=100;c++)
		    {
		
		        if(5*a+b*3+c*1/3==100 && a+b+c==100) 	printf("%.0f %.0f %.0f\n",a,b,c);
    	
	        } 
	    }
	}
	return 0;
}