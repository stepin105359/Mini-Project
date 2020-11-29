#include "unity.h"


void setUp()
{

}
void tearDown()
{

}

void test_encrypt1(void)
{
    TEST_ASSERT_EQUAL(3,encrypt(3,7));
}
void test_encrypt2(void)
{
    TEST_ASSERT_EQUAL(13,encrypt(3,11));
}
int test_main(void)
{

    UNITY_BEGIN();
    RUN_TEST(test_encrypt1);
    RUN_TEST(test_encrypt2);
    return UNITY_END();
}
