#include <stdio.h>
int main()
{
	int c=0,i,j,m;
	scanf("%d",&i);//i为天数 
	int b[i];
	for(j=0;j<i;j++)
	scanf("%d",&b[j]);//输入天数n 

	
	for(m=1;m<(i-1);m++)
	{
		if((b[m]-b[m-1]) * (b[m+1]-b[m]) < 0)
		c=c+1;
			
		
	}
	printf("%d",c);
	
	return 0;
 }