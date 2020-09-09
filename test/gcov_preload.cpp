/*************************************************************************
  > File Name: test/gcov_preload.cpp
  > Author: yupeifeng
  > Mail: yupeifengyannis@foxmail.com
  > Created Time: 2020年09月09日 星期三 22时43分00秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <signal.h>

void sighandler(int signo){
  exit(signo);
}
__attribute__ ((constructor))
  void ctor(){
    int sigs[] = {
      SIGILL, SIGFPE, SIGABRT, SIGBUS,
      SIGSEGV, SIGHUP, SIGINT, SIGQUIT,
      SIGTERM     

    };
    int i; 
    struct sigaction sa;
    sa.sa_handler = sighandler;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = SA_RESETHAND;

    for(i = 0; i < sizeof(sigs)/sizeof(sigs[0]); ++i) {
      if (sigaction(sigs[i], &sa, NULL) == -1) {
        perror("Could not set signal handler");

      }

    } 
  } 
