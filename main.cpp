//
// Created by linglx on 18-3-29.
//

#include "prompt.h"

using namespace prompt;

int main()
{
  INFO() << "hello, world" << "\t" << 2 << '\n';
  INFO(CYAN) << "hello, world" << "\t" << 2 << '\n';

  WARNING() << "this is warning" << '\t' << 2 << '\n';
  DEBUG() << "this is debug message" << '\t' << 3 << '\n';
  ERROR() << "this is error message" << '\t' << 4 << '\n';
  return 0;
}