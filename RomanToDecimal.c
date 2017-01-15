#include<stdio.h>
#include<string.h>

int RomanToDecimal(char RomanNo[])
{
	int i = 0, DecimalNo1 = 0;
	switch(RomanNo[i])
	{
		case 'I':
			DecimalNo1 = 1;
			break;
		default:
			DecimalNo1 = 0;
			break;
	}
	return DecimalNo1;
}
