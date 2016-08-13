#include <check.h>
#include "../src/converter.h"

START_TEST(i_returns_one)
{
	ck_assert_int_eq(to_arabic("I"), 1);
}
END_TEST

Suite * converter_suite(void)
{
	Suite *s;
	TCase *tc_to_arabic;

	s = suite_create("converter");

	/* Core test case */
	tc_to_arabic = tcase_create("to_arabic");

	tcase_add_test(tc_to_arabic, i_returns_one);
	suite_add_tcase(s, tc_to_arabic);

	return s;
}
