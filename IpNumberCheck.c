#include <stdio.h>
#include "Functions.h"

int IpCheck(char RomanNo[])
{
	
	int IpNoStatus = 0,i=0;
	switch(RomanNo[i])
	{
		case 'I':
			IpNoStatus = 1;
			break;
		default:
			IpNoStatus = 0;
			break;
	}
	return IpNoStatus;
}
