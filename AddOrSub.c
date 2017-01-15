#include<stdio.h>

int AddOrSub(int RomanToDecimalNo1,int RomanToDecimalNo2,int Operation)
{
	int Result;
	if(Operation == 1)
		Result = RomanToDecimalNo1 + RomanToDecimalNo2;
	else
	{
		if(RomanToDecimalNo2 > RomanToDecimalNo1)
			Result = RomanToDecimalNo2 - RomanToDecimalNo1;
		else
			Result = RomanToDecimalNo1 - RomanToDecimalNo2;
	}
	return Result;
}
