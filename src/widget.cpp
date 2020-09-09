/*************************************************************************
	> File Name: src/widget.cpp
	> Author: yupeifeng
	> Mail: yupeifengyannis@foxmail.com
	> Created Time: 2020年09月05日 星期六 14时54分47秒
 ************************************************************************/

#include<iostream>
#include <glog/logging.h>
#include "widget.h"
using namespace std;

void Widget::print(){
  std::cout << "hello world" << std::endl;
}

void Widget::print(const string& str){
  if(str.size() == 0){
    LOG(FATAL) << "input str must not be a null string";
  }
  std::cout << str;
}

void Widget::fatal(){
  LOG(FATAL) << "error";
}
