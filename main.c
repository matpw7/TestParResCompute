//simple project for testing
//computes parallel resistors and prints a table

#include <stdio.h>



//resistors values
float res[] = { 1, 2.2, 4.7, 6.8, 10 };

// newline depends on system
#define NL printf("\r\n")

float compute(float a, float b)
{
	return a*b/(a+b);
}






#define RESLEN (sizeof(res)/sizeof(float))




void main()
{
	printf("Resistors:");NL;
	//first line
	printf("      ");
	for(int i=0;i<RESLEN;i++)
	{
		printf("%5.1f  ",res[i]);
	}
	NL;
	//table
	for(int i=0;i<RESLEN;i++)
	{
		printf("%4.1f:  ",res[i]);
		for(int j=0;j<RESLEN;j++)
		{
			printf("%5.2f  ",compute(res[i],res[j]));
		}
		NL;
	}
}

//output:
/*
Resistors:
        1.0    2.2    4.7    6.8   10.0  
 1.0:   0.50   0.69   0.82   0.87   0.91  
 2.2:   0.69   1.10   1.50   1.66   1.80  
 4.7:   0.82   1.50   2.35   2.78   3.20  
 6.8:   0.87   1.66   2.78   3.40   4.05  
10.0:   0.91   1.80   3.20   4.05   5.00  
*/
