#include<stdio.h>
#include<stdlib.h>
char *DecimalToRoman(int decimal)
{
	int i=0,n=20;
	char *RomanNo;
	RomanNo = malloc(n);
		switch(decimal)
		{
			case 1:
				RomanNo[i] = 'I';
				i++;
				//printf("\n%d",i);
				break;	
			default:
				RomanNo[i] = '\0';
				break;
		}
	RomanNo[i] = '\0';
	return RomanNo;
}
