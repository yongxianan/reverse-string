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
  printf("size of an integer %d\n",sizeof(int));
  printf("c is at addr: %x\n", &c);
  printf("ptr is at addr: %x\n", &ptr);
  printf("ptr points to addr: %x\n", ptr);
  printf("ptrptr is at addr: %x\n",&ptrptr);
  printf("ptrptr point to addr: %x\n",ptrptr);
  printf("ptrptr point to another pointer at addr: %x\n", *ptrptr);

  //TEST_ASSERT_EQUAL(0, checkStrLength(&(NULL)));
}

void test_getStringLength_given_a_NULL_expect2_0(void){
  TEST_ASSERT_EQUAL(0,FindStrLength(""));
}

void test_getStringLength_given_a_f_expect_1(void){
  TEST_ASSERT_EQUAL(1,FindStrLength("f"));
}

void test_getStringLength_given_a_data_expect_4(void){
  TEST_ASSERT_EQUAL(4,FindStrLength("data"));
}

void test_getStringLength_given_a_framework_expect_9(void){
  TEST_ASSERT_EQUAL(9,FindStrLength("framework"));
}

void test_stringReverse_framework_expect_krowemarf(void)
{
    char *str = reverseString("framework");
    TEST_ASSERT_EQUAL_STRING("krowemarf" ,str);
}

void test_stringReverse_hello_expect_olleh(void)
{
    char *str = reverseString("hello");
    TEST_ASSERT_EQUAL_STRING("olleh" ,str);
}

void test_stringReverse_testing_expect_gnitset(void)
{
    char *str = reverseString("testing");
    TEST_ASSERT_EQUAL_STRING("gnitset" ,str);
}
/*
void test_stringReverse_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement stringReverse");
}
*/