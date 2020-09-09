#ifndef UTIL_HPP_
#define UTIL_HPP_

#include <vector>
#include <glog/logging.h>
using namespace std;
template <typename Dtype>
void add(const vector<Dtype>& src1, const vector<Dtype>& src2,
         vector<Dtype>& des){
  CHECK_EQ(src1.size(), src2.size()) << "src1's size must equal to src2's size";
  CHECK_EQ(src1.size(), des.size()) << "src's size must equal to des's size";
  int size = src1.size();
  for(int i = 0; i < size; ++i){
    des[i] = src1[i] + src2[i];
  }
}

inline void fatal_error(){
  LOG(FATAL) << "error";
}

#endif
