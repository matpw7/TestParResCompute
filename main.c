//simple project for testing
//computes parallel resistors and prints a table

#include <stdio.h>

#include "userParams.h"
#include "tools.h"

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


