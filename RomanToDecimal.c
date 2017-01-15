#include<stdio.h>
#include<string.h>

int RomanToDecimal(char RomanNo[])
{
	int i = 0, DecimalNo = 0, DecimalNo1 = 0, DecimalNo2 = 0;
	int length = strlen(RomanNo);
	for(i = 0; i<length; i++)
	{
		switch(RomanNo[i])
		{
			case 'I':
				DecimalNo1 = 1;
				break;
			case 'V':
				DecimalNo1 = 5;
				break;
			case 'X':
				DecimalNo1 = 10;
				break;
			case 'L':
				DecimalNo1 = 50;
				break;
			case 'C':
				DecimalNo1 = 100;
				break;
			case 'D':
				DecimalNo1 = 500;
				break;
			case 'M':
				DecimalNo1 = 1000;
				break;
			default:
				DecimalNo1 = 0;
				break;
		}
		switch(RomanNo[i+1])
		{
			case 'I':
				DecimalNo2 = 1;
				break;
			case 'V':
				DecimalNo2 = 5;
				break;
			case 'X':
				DecimalNo2 = 10;
				break;
			case 'L':
				DecimalNo2 = 50;
				break;
			case 'C':
				DecimalNo2 = 100;
				break;
			case 'D':
				DecimalNo2 = 500;
				break;
			case 'M':
				DecimalNo2 = 1000;
				break;
			default:
				DecimalNo2 = 0;
				break;
		}
		if(DecimalNo1 < DecimalNo2)
		{
			DecimalNo += DecimalNo2 - DecimalNo1;
			i++;
		}
		else
			DecimalNo += DecimalNo1;
	}
	return DecimalNo;
}
