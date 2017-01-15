#include<stdio.h>
#include<stdlib.h>
#include "Functions.h"
int main()
{
	//Declar the required variables
	int IpNoStatus = 0;
	char IpRomanNo1[50], IpRomanNo2[50];
	int RomanToDecimalNo1=0,RomanToDecimalNo2=0 ;

	//Scan the First Roman Number
	printf("Enter First Roman No:");
	scanf("%s", IpRomanNo1);
	IpNoStatus = IpCheck(IpRomanNo1);
	
	//Scans for first Roman Number until Corrent Format is Provided
	while(IpNoStatus != 1)
	{
		printf("You Entered Wrong Number it Can Only Contain I|V|X|L|C|D|M\nTry Again:");
		scanf("%s", IpRomanNo1);
		IpNoStatus = IpCheck(IpRomanNo1);
	}

	//Scan the Second Roman Number
	printf("Enter Second Roman No:");
	scanf("%s", IpRomanNo2);
	IpNoStatus = IpCheck(IpRomanNo2);
	
	//Scans for first Roman Number until Corrent Format is Provided
	while(IpNoStatus != 1)
	{
		printf("You Entered Wrong Number it Can Only Contain I|V|X|L|C|D|M\nTry Again:");
		scanf("%s", IpRomanNo2);
		IpNoStatus = IpCheck(IpRomanNo2);
	}

	//Display Scaned Data
	printf("First Number: %s\tSecond Number: %s\n",IpRomanNo1,IpRomanNo2);

	//Convert Roman Number to Decimal
	RomanToDecimalNo1 = RomanToDecimal(IpRomanNo1);
	RomanToDecimalNo2 = RomanToDecimal(IpRomanNo2);
	
	//Display The converted Numbers
	printf("First Number: %d\t Second Number: %d",RomanToDecimalNo1,RomanToDecimalNo2);
	return 0;
}
