#include <stdio.h>
#include <string.h>
#include "Functions.h"

int IpCheck(char RomanNo[])
{
	
	int length = strlen(RomanNo);//String length to decide no. iteration 
	int IpNoStatus = 0,i=0;
	for(i=0;i<length;i++)
	{
		switch(RomanNo[i])
		{
			case 'I':
				IpNoStatus = 1;
				break;
			case 'V':
				IpNoStatus = 1;
				break;
			case 'X':
				IpNoStatus = 1;
				break;
			case 'L':
				IpNoStatus = 1;
				break;
			case 'C':
				IpNoStatus = 1;
				break;
			case 'D':
				IpNoStatus = 1;
				break;
			case 'M':
				IpNoStatus = 1;
				break;
			default:
				IpNoStatus = 0;
				i = length;//To break from for loop when any char of string is not from above char
				break;
		}
	}
	return IpNoStatus;
}
