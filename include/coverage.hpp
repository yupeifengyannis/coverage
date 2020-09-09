#ifndef COVERAGE_HPP_
#define COVERAGE_HPP_

#include <glog/logging.h>

template <typename Dtype>
class Coverage{
  public:
   void test_coverage(){
    LOG(FATAL) << "error";
   }
};

#endif
