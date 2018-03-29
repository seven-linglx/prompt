//
// Created by linglx on 18-3-28.
// contact me by email(linglx@foxmail.com)
//

#include <iostream>

namespace prompt{

#define RESET "\033[0m"
//#define BLACK "\033[30m" /* Black */
//#define RED "\033[31m" /* Red */
//#define GREEN "\033[32m" /* Green */
//#define YELLOW "\033[33m" /* Yellow */
//#define BLUE "\033[34m" /* Blue */
//#define MAGENTA "\033[35m" /* Magenta */
//#define CYAN "\033[36m" /* Cyan */
//#define WHITE "\033[37m" /* White */
//#define BOLDBLACK "\033[1m\033[30m" /* Bold Black */
//#define BOLDRED "\033[1m\033[31m" /* Bold Red */
//#define BOLDGREEN "\033[1m\033[32m" /* Bold Green */
//#define BOLDYELLOW "\033[1m\033[33m" /* Bold Yellow */
//#define BOLDBLUE "\033[1m\033[34m" /* Bold Blue */
//#define BOLDMAGENTA "\033[1m\033[35m" /* Bold Magenta */
//#define BOLDCYAN "\033[1m\033[36m" /* Bold Cyan */
//#define BOLDWHITE "\033[1m\033[37m" /* Bold White */

using namespace std;

enum COLOR{
  BLACK = 0,
  RED,
  GREEN,
  YELLOW,
  CYAN,
  NORMAL
};

char* Color(COLOR& c){
  switch (c)
  {
    case BLACK:
      return const_cast<char *>("\033[30m"); /* Black */
    case RED:
      return const_cast<char *>("\033[31m"); /* RED */
    case GREEN:
      return const_cast<char *>("\033[32m"); /* GREEN */
    case YELLOW:
      return const_cast<char *>("\033[33m"); /* Yellow */
    case CYAN:
      return const_cast<char *>("\033[36m"); /* CYAN */
    case NORMAL:
    default:
      return const_cast<char *>("\033[0m"); /* RESET */
  }
};

class Base {
  public:
  explicit Base(COLOR c):c_(c){};
  template<typename T>
  Base& operator<<(const T& msg);
  Base& operator<<(int& val);

  private:
  COLOR c_;
};
template <typename T>
Base& Base::operator<<(const T& msg){
  cout << Color(c_) << msg;
  return *this;
}
Base& Base::operator<<(int& val){
  cout << val << flush;
  return *this;
}

class INFO : public Base{
  public:
  INFO():Base(GREEN){};
  explicit INFO(COLOR c):Base(c){};
};

class WARNING : public Base{
  public:
  WARNING():Base(YELLOW){};
  explicit WARNING(COLOR c):Base(c){};
};

class ERROR : public Base{
  public:
  ERROR():Base(RED){};
  explicit ERROR(COLOR c):Base(c){};
};

class DEBUG : public Base{
  public:
  DEBUG():Base(CYAN){};
  explicit DEBUG(COLOR c):Base(c){};
};

}//namespace prompt
