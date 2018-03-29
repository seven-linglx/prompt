//
// Created by linglx on 18-3-29.
//

#include "prompt.h"
#include "prompt_simple.h"

using namespace prompt_simple;

int main()
{
  INFO << "info" << '\t' << 2 << endl;
  ERROR << "info" << '\t' << 2 << endl;
  DEBUG << "info" << '\t' << 2 << endl;
  WARNING << "info" << '\t' << 2 << endl;
  NORMAL << "info" << '\t' << 2 << endl;

  /*
  INFO() << "hello, world" << "\t" << 1 << '\n';
  INFO(CYAN) << "hello, world" << "\t" << 2 << '\n';
  INFO(NORMAL) << "-------------------------------" << '\n';

  WARNING() << "this is warning" << '\t' << 2 << '\n';
  DEBUG() << "this is debug message" << '\t' << 3 << '\n';
  ERROR() << "this is error message" << '\t' << 4 << '\n';
  */
  return 0;
}