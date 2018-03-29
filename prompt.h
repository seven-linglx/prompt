#include <iostream>

namespace prompt{

#define RESET "\033[0m" 
#define BLACK "\033[30m" /* Black */ 
#define RED "\033[31m" /* Red */ 
#define GREEN "\033[32m" /* Green */ 
#define YELLOW "\033[33m" /* Yellow */ 
#define BLUE "\033[34m" /* Blue */ 
#define MAGENTA "\033[35m" /* Magenta */ 
#define CYAN "\033[36m" /* Cyan */ 
#define WHITE "\033[37m" /* White */ 
#define BOLDBLACK "\033[1m\033[30m" /* Bold Black */ 
#define BOLDRED "\033[1m\033[31m" /* Bold Red */ 
#define BOLDGREEN "\033[1m\033[32m" /* Bold Green */ 
#define BOLDYELLOW "\033[1m\033[33m" /* Bold Yellow */ 
#define BOLDBLUE "\033[1m\033[34m" /* Bold Blue */ 
#define BOLDMAGENTA "\033[1m\033[35m" /* Bold Magenta */ 
#define BOLDCYAN "\033[1m\033[36m" /* Bold Cyan */ 
#define BOLDWHITE "\033[1m\033[37m" /* Bold White */ 

using namespace std;

class INFO {
  public:
  template<typename T>
  INFO& operator<<(const T& msg);
  INFO& operator<<(int& val);
};
template <typename T>
INFO& INFO::operator<<(const T& msg){
  cout << GREEN << msg << RESET;
}
INFO& INFO::operator<<(int& val){
  cout << val << flush;
}
INFO info;

class ERROR {
  public:
  template<typename T>
  ERROR& operator<<(const T& msg);
  ERROR& operator<<(int& val);
};
template <typename T>
ERROR& ERROR::operator<<(const T& msg){
  cout << RED << msg << RESET;
}
ERROR& ERROR::operator<<(int& val){
  cout << val << flush;
}
ERROR error;

class WARNING {
  public:
  template<typename T>
  WARNING& operator<<(const T& msg);
  WARNING& operator<<(int& val);
};
template <typename T>
WARNING& WARNING::operator<<(const T& msg){
  cout << YELLOW << msg << RESET;
}
WARNING& WARNING::operator<<(int& val){
  cout << val << flush;
}
WARNING warning;

class DEBUG {
  public:
  template<typename T>
  DEBUG& operator<<(const T& msg);
  DEBUG& operator<<(int& val);
};
template <typename T>
DEBUG& DEBUG::operator<<(const T& msg){
  cout << CYAN << msg << RESET;
}
DEBUG& DEBUG::operator<<(int& val){
  cout << val << flush;
}
DEBUG debug;
}//namespace prompt
