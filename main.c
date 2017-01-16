#include<stdio.h>
#include<stdlib.h>
#include "Functions.h"
int main()
{
	//Declar the required variables
	int IpNoStatus = 0;
	char IpRomanNo1[50], IpRomanNo2[50];
	int RomanToDecimalNo1=0,RomanToDecimalNo2=0,Operation=0,Result=0;
	char *c1;
	c1 = (char *)malloc(30);

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

	//Select Operation 1= Addition and 2=Subtraction
	printf("Enter 1 for Addition(+) OR Enter 2 for Subtraction(-):");
	scanf("%d", &Operation);
	
	//Display Scaned Data
	if(Operation == 1)
		printf("First Number: %s\tSecond Number: %s\tOperation selected:Addition\n",IpRomanNo1,IpRomanNo2);
	else
		printf("First Number: %s\tSecond Number: %s\tOperation selected:Subtraction\n",IpRomanNo1,IpRomanNo2);

	//Convert Roman Number to Decimal
	RomanToDecimalNo1 = RomanToDecimal(IpRomanNo1);
	RomanToDecimalNo2 = RomanToDecimal(IpRomanNo2);
	
	//Display The converted Numbers
	printf("First Number: %d\t Second Number: %d\n",RomanToDecimalNo1,RomanToDecimalNo2);

	//Perform Add or Subtraction as per selection
	Result = AddOrSub(RomanToDecimalNo1,RomanToDecimalNo2,Operation);

	//Convert Result of Addition or Subtraction to Roman Number System
	c1 = DecimalToRoman(Result);

	//Display The Final Result
	if(Operation == 1)
		printf("\nThe Addition is:%dand Its Roman Equivalent is: %s\nThank You For Using My Roman Calc\n",Result,c1);
	else
		printf("\nThe Subtraction is:%dand Its Roman Equivalent is: %s\nThank You For Using My Roman Calc\n",Result,c1);
	return 0;
}
