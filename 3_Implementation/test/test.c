#include "fun.h"
#include "unity.h"
#include "struct.h"

void test_deleterecords(void);
void test_searchrecords(void);
void test_addrecords(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_deleterecords);
  RUN_TEST(test_searchrecords);
  RUN_TEST(test_addrecords);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_deleterecords(void)
{
    char servicenumber[20]="UC0000123456";
    TEST_ASSERT_EQUAL("UC0000123456", servicenumber);
   
}

void test_searchrecords(void)
{
    char servicenumber[20]="UC0000123456";
    TEST_ASSERT_EQUAL("UC0000123456", servicenumber);
   
}

void test_addrecords(void)
{
    char servicenumber[20]="UC0000123456";

    char name[20]="ROHIT";

    char amount [20]="100";

 TEST_ASSERT_EQUAL("UC00000123456",servicenumber);
 TEST_ASSERT_EQUAL("ROHIT", name);
 TEST_ASSERT_EQUAL("100", amount);
   
}