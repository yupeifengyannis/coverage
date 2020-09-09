/*************************************************************************
	> File Name: test/gtest_main.cpp
	> Author: yupeifeng
	> Mail: yupeifengyannis@foxmail.com
	> Created Time: 2020年09月05日 星期六 15时02分25秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <gtest/gtest.h>

int main(int argc, char** argv){
  ::testing::InitGoogleTest(&argc, argv);
  // testing::FLAGS_gtest_death_test_style = "threadsafe";
  return RUN_ALL_TESTS();
}
