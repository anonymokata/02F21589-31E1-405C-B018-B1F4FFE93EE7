/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "test.check" instead.
 */

#include <check.h>

#line 1 "test.check"
#include "Functions.h"
#include <string.h>
/*#test correctRomanNumber
	
	char RomanNo[] = "MVXLI";
	ck_assert_int_eq(IpCheck(RomanNo),1);*/
START_TEST(RomanNoToDecimal)
{
#line 8
	
	char RomanNo[5];
	RomanNo[0] = 'I';
	ck_assert_int_eq(RomanToDecimal(RomanNo),1);
}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, RomanNoToDecimal);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}