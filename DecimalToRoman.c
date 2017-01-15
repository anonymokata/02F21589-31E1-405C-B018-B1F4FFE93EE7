#include<stdio.h>
#include<stdlib.h>
char *DecimalToRoman(int decimal)
{
	int i=0,n=20;
	int ten,one;
	char *RomanNo;
	RomanNo = malloc(n);
	ten = decimal - (decimal%10);
	one = decimal - ten;
	switch(ten)
	{
		case 90:
			RomanNo[i] = 'X';
			RomanNo[i+1] = 'C';
			i += 2;
			break;
		case 80:
			RomanNo[i] = 'L';
			RomanNo[i+1] = 'X';
			RomanNo[i+2] = 'X';
			RomanNo[i+3] = 'X';
			i += 4;
			break;
		case 70:
			RomanNo[i] = 'L';
			RomanNo[i+1] = 'X';
			RomanNo[i+2] = 'X';
			i += 3;
			break;
		case 60:
			RomanNo[i] = 'L';
			RomanNo[i+1] = 'X';
			i += 2;
			break;
		case 50:
			RomanNo[i] = 'L';
			i++;
			break;	
		case 40:
			RomanNo[i] = 'X';
			RomanNo[i+1] = 'L';
			i += 2;
			break;
		case 30:
			RomanNo[i] = 'X';
			RomanNo[i+1] = 'X';
			RomanNo[i+2] = 'X';
			i += 3;
			break;
		case 20:
			RomanNo[i] = 'X';
			RomanNo[i+1] = 'X';
			i += 2;
			break;
		case 10:
			RomanNo[i] = 'X';
			i++;
			break;
		default:
			RomanNo[i] = '\0';
			break;
		}	
	switch(one)
	{
		case 9:
			RomanNo[i] = 'I';
			RomanNo[i+1] = 'X';
			i += 2;
			break;
		case 8:
			RomanNo[i] = 'V';
			RomanNo[i+1] = 'I';
			RomanNo[i+2] = 'I';
			RomanNo[i+3] = 'I';
			i += 4;
			break;
		case 7:
			RomanNo[i] = 'V';
			RomanNo[i+1] = 'I';
			RomanNo[i+2] = 'I';
			i += 3;
			break;
		case 6:
			RomanNo[i] = 'V';
			RomanNo[i+1] = 'I';
			i += 2;
			break;
		case 5:
			RomanNo[i] = 'V';
			i++;
			break;	
		case 4:
			RomanNo[i] = 'I';
			RomanNo[i+1] = 'V';
			i += 2;
			break;
		case 3:
			RomanNo[i] = 'I';
			RomanNo[i+1] = 'I';
			RomanNo[i+2] = 'I';
			i += 3;
			break;
		case 2:
			RomanNo[i] = 'I';
			RomanNo[i+1] = 'I';
			i += 2;
			break;			
		case 1:
			RomanNo[i] = 'I';
			i++;
			break;	
		default:
			RomanNo[i] = '\0';
			break;
	}
	RomanNo[i] = '\0';
	return RomanNo;
}
