#include "CppUTest/CommandLineTestRunner.h"

#include "../src/func1.h"

int main(int argc, char **argv){
      return CommandLineTestRunner::RunAllTests(argc, argv);
}

TEST_GROUP(FirstTestGroup)
{
};

TEST(FirstTestGroup, func1_1)
{
    LONGS_EQUAL(0, func1(0,0));
}

TEST(FirstTestGroup, func1_2)
{
    LONGS_EQUAL(1, func1(1,1));
}