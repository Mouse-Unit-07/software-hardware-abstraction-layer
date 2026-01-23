/*================================ FILE INFO =================================*/
/* Filename           : test_repeat_hello_world.cpp                           */
/*                                                                            */
/* Test implementation for repeat_hello_world.c                               */
/*                                                                            */
/*============================================================================*/

/*============================================================================*/
/*                               Include Files                                */
/*============================================================================*/
extern "C" {
#include "repeat_hello_world.h"
}

#include <CppUTest/TestHarness.h>
#include <CppUTestExt/MockSupport.h>

/*============================================================================*/
/*                            Mock Implementations                            */
/*============================================================================*/
extern "C" void printHelloWorld(void)
{
    mock().actualCall("printHelloWorld");
}

/*============================================================================*/
/*                             Private Definitions                            */
/*============================================================================*/
/* none */

/*============================================================================*/
/*                                 Test Group                                 */
/*============================================================================*/
TEST_GROUP(RepeatHelloWorldTests)
{
    void setup() override
    {
        mock().clear();
    }

    void teardown() override
    {
        mock().checkExpectations();
        mock().clear();
    }
};

/*============================================================================*/
/*                                    Tests                                   */
/*============================================================================*/
TEST(RepeatHelloWorldTests, ShouldCallPrintTwice)
{
    mock().expectNCalls(2, "printHelloWorld");
    printHelloWorldTwice();
}
