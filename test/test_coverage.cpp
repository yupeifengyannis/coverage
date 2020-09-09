/*************************************************************************
	> File Name: test/test_coverage.cpp
	> Author: yupeifeng
	> Mail: yupeifengyannis@foxmail.com
	> Created Time: 2020年09月09日 星期三 23时01分32秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include "coverage.hpp"
#include <gtest/gtest.h>

class CoverageTest : public testing::Test{};

TEST_F(CoverageTest, deathTest){
  Coverage<int> c1;
  Coverage<double> c2;
  EXPECT_DEATH(c1.test_coverage(), "");
  EXPECT_DEATH(c2.test_coverage(), "");
}
