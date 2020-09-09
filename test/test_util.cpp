/*************************************************************************
	> File Name: test/test_util.cpp
	> Author: yupeifeng
	> Mail: yupeifengyannis@foxmail.com
	> Created Time: 2020年09月05日 星期六 15时04分42秒
 ************************************************************************/

#include<iostream>
#include <vector>
#include "util.hpp"
using namespace std;

#include <gtest/gtest.h>

class UtilTest : public testing::Test{};

TEST_F(UtilTest, TestAdd){
  std::vector<int> vec1{1,2,3,4};
  std::vector<int> vec2{4,3,2,1};
  std::vector<int> des(4);
  add(vec1, vec2, des);
  for(auto item : des){
    EXPECT_EQ(item, 5);
  }
}

TEST_F(UtilTest, TestAddDeathTest){
  std::vector<int> vec1;
  std::vector<int> vec2{1};
  std::vector<int> des(2);
  EXPECT_DEATH(add(vec1, vec2, des), "");
  vec1.resize(1, 2);
  EXPECT_DEATH(add(vec1, vec2, des), "");

}
