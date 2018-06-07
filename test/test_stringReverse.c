#include "unity.h"
#include "stringReverse.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_getStringLength_given_a_NULL_expect1_0(void){
  char c;
  char *ptr = &c;
  char **ptrptr = &ptr;
  printf("size of an integer %d",sizeof(int));
  printf("c is at addr: %x\n", &c);
  printf("ptr is at addr: %x\n", &ptr);
  printf("ptr points to addr: %x\n", ptr);
  printf("ptrptr is at addr: %x\n",&ptrptr);
  printf("ptrptr point to addr: %x\n",&ptrptr);
  printf("ptrptr point to another pointer at addr: %x\n", *ptrptr);
  TEST_ASSERT_EQUAL(0,reverseString(NULL));
}

void test_getStringLength_given_a_NULL_expect2_0(void){
  TEST_ASSERT_EQUAL(0,reverseString(""));
}

void test_getStringLength_given_a_f_expect_1(void){
  TEST_ASSERT_EQUAL(1,reverseString("f"));
}

void test_getStringLength_given_a_data_expect_4(void){
  TEST_ASSERT_EQUAL(4,reverseString("data"));
}
/*
void test_stringReverse_framework_expect_krowemarf(void)
{
    char *str = reverseString("framework");
    TEST_ASSERT_EQUAL_STRING("krowemarf" ,str);
}
*/
void test_stringReverse_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement stringReverse");
}
