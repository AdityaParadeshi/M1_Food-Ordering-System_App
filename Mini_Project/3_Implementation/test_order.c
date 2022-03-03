#include <complex.h>
#include "unity.h"
void setUp(){

}
void tearDown(){

}
void test_order(void){
    TEST_ASSERT_EQUAL_FLOAT(1,order("xyz",0,0,0));
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_order);
    
    return UNITY_END();
}