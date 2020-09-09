/*************************************************************************
	> File Name: test/test_death.cpp
	> Author: yupeifeng
	> Mail: yupeifengyannis@foxmail.com
	> Created Time: 2020年09月09日 星期三 22时54分04秒
 ************************************************************************/

#include<iostream>
using namespace std;

#include "util.hpp"
#include <gtest/gtest.h>

class DeathTest : public testing::Test{};

TEST_F(DeathTest, TestFatalError){
  EXPECT_DEATH(fatal_error(), "");
}
