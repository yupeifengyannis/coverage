/*************************************************************************
	> File Name: test/test_widget.cpp
	> Author: yupeifeng
	> Mail: yupeifengyannis@foxmail.com
	> Created Time: 2020年09月05日 星期六 15时41分37秒
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;
#include <gtest/gtest.h>
#include "widget.h"
class WidgetTest : public ::testing::Test{};


TEST_F(WidgetTest, TestPrint){
  Widget w;
  string str = "hello world";
  w.print();
  w.print(str);
}

TEST_F(WidgetTest, TestPrintDeathTest){
  Widget w;
  string str;
  EXPECT_DEATH(w.print(str), "");
}

TEST_F(WidgetTest, TestFatalDeathTest){
  Widget w;
  EXPECT_DEATH(w.fatal(), "");
}
