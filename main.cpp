#include <cmath>
#include <string>
#include <vector>
#include <iostream>

#include "quickcg.h"
using namespace QuickCG;
using namespace std;


int main(int
argc, char *argv[])
{
  screen(256, 256, 0, "Input Text");
  //input a string
  std::string someText;
  getInputString(someText, "Enter some text:", false, 0, 0);
  //input an integer
  int someInteger = getInput<int>("Enter an integer:", false, 0, 8);
  //input a double
  double someDouble = getInput<double>("Enter a number:", false, 0, 16);
}