/*************************************************************************
	> File Name: include/widget.h
	> Author: yupeifeng
	> Mail: yupeifengyannis@foxmail.com
	> Created Time: 2020年09月05日 星期六 14时52分18秒
 ************************************************************************/

#ifndef _INCLUDE_WIDGET_H
#define _INCLUDE_WIDGET_H
#include <string>
using namespace std;

class Widget{
 public:
  void print();
  void print(const string& str);
  void fatal();
};

#endif
