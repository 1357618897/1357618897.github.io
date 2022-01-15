
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){   
    int bir[4];
    int year, n; 
	scanf("%d %d",&year, &n);
    int i, count = 0;   
    for(i=year; i<3020; i++)
	{       
        count = 1;       
        bir[0] = i/1000;      
        bir[1] = i/100%10;       
        bir[2] = i/10%10;       
        bir[3] = i%10;//转化成数字
        if(bir[0] != bir[1] && bir[0] != bir[2] && bir[0] != bir[3]) 
		{
			count++;
		}      
        if(bir[1] != bir[2] && bir[1] != bir[3])
		{
			 count++; 
		}       
        if(bir[2] != bir[3])
        {
        	 count++;
		}
        if(count == n)
        {
        	 break;  
		}
	}   
        printf("%d %04d", i-year, i);  
        return 0;
}


