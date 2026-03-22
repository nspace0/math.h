#include <check.h>
#include <stdlib.h>
#include <limits.h>

#include "../s21_math.h"


START_TEST(test_abs_positive) {
    int x = -5;
    ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_negative) {
    int x = 5;
    ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_zero) {
    int x = 0;
    ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_one) {
    int x = 1;
    ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_minus_one) {
    int x = -1;
    ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_123) {
    int x = 123;
    ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_minus_123) {
    int x = -123;
    ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_int_max) {
    int x = INT_MAX;
    ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_int_min) {
    int x = INT_MIN;
    ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_big_number) {
    int x = 2147483648;
    ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_minus_big_number) {
    int x = -2147483648;
    ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST


Suite *abs_suite(void) {
    Suite *s = suite_create("s21_abs");
    TCase *tc = tcase_create("core");

    tcase_add_test(tc, test_abs_positive);
    tcase_add_test(tc, test_abs_negative);
    tcase_add_test(tc, test_abs_zero);
    
    tcase_add_test(tc, test_abs_one);
    tcase_add_test(tc, test_abs_minus_one);
    tcase_add_test(tc, test_abs_123);
    tcase_add_test(tc, test_abs_minus_123);

    tcase_add_test(tc, test_abs_int_max);
    tcase_add_test(tc, test_abs_int_min);

    tcase_add_test(tc, test_abs_big_number);
    tcase_add_test(tc, test_abs_minus_big_number);


    suite_add_tcase(s, tc);
    return s;
}

int main(void) {
    Suite *s = abs_suite();
    SRunner *sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);

    int failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (failed == 0) ? 0 : 1;
}