/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "test.check" instead.
 */

#include <check.h>

#line 1 "test.check"
#include "Functions.h"
#include <string.h>
#include<stdlib.h>
/*#test correctRomanNumber
	
	char RomanNo[] = "MVXLI";
	ck_assert_int_eq(IpCheck(RomanNo),1);*/

/*#test RomanNoToDecimal
	
	char RomanNo[] = "MDCCXXIV";
	char RomanNo1[] = "MLXLVI";
	ck_assert_int_eq(RomanToDecimal(RomanNo),1724);
	ck_assert_int_eq(RomanToDecimal(RomanNo1),1096);*/

/*#test AdditionOrSubtraction

	char RomanNo[] = "MDCCXXIV";
	char RomanNo1[] = "MLXLVI";
	int RomanToDecimal1, RomanToDecimal2;
	int operation = 2;//If its 1 then Addition & 2 then Subtraction
	RomanToDecimal1 = RomanToDecimal(RomanNo);
	RomanToDecimal2 = RomanToDecimal(RomanNo1);
	ck_assert_int_eq(AddOrSub(RomanToDecimal1,RomanToDecimal2,operation),628);*/
START_TEST(DecimalNoToRomanNo)
{
#line 26

	int decimal = 100;	
	char *c1;
	c1 = (char *)malloc(30);
	c1 = DecimalToRoman(decimal);
	ck_assert_str_eq(c1,"C");
	/*decimal = 12;
	c1 = DecimalToRoman(decimal);
	ck_assert_str_eq(c1,"XII");
	decimal = 44;
	c1 = DecimalToRoman(decimal);
	ck_assert_str_eq(c1,"XLIV");
	decimal = 99;
	c1 = DecimalToRoman(decimal);
	ck_assert_str_eq(c1,"XCIX");*/



















}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, DecimalNoToRomanNo);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}
