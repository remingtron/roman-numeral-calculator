#include <check.h>
#include "../src/converter.h"

START_TEST(i_returns_one)
{
	ck_assert_int_eq(to_arabic("I"), 1);
}
END_TEST

START_TEST(ii_returns_two)
{
	ck_assert_int_eq(to_arabic("II"), 2);
}
END_TEST

START_TEST(v_returns_five)
{
	ck_assert_int_eq(to_arabic("V"), 5);
}
END_TEST

START_TEST(vi_returns_six)
{
	ck_assert_int_eq(to_arabic("VI"), 6);
}
END_TEST

START_TEST(x_returns_ten)
{
	ck_assert_int_eq(to_arabic("X"), 10);
}
END_TEST

START_TEST(iv_returns_four)
{
	ck_assert_int_eq(to_arabic("IV"), 4);
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
	tcase_add_test(tc_to_arabic, ii_returns_two);
	tcase_add_test(tc_to_arabic, v_returns_five);
	tcase_add_test(tc_to_arabic, vi_returns_six);
	tcase_add_test(tc_to_arabic, x_returns_ten);
	tcase_add_test(tc_to_arabic, iv_returns_four);
	suite_add_tcase(s, tc_to_arabic);

	return s;
}
