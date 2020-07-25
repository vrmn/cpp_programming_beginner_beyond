#include <iostream>

int main(){

  int favorite_number;
  std::cout << "enter your favorite number between 1 and 100";

  std::cin >> favorite_number;

  std::cout << "amazing!! that my fave also" << std::endl;

  return 0;
}

// recall you can use codelite which is already configured
// but since youre trying to stay consistent with the way you learned python
// were using atom and building in the terminal, in a way similar to chmod +x for python.
// in this case recall to build, the syntax is
//  g++ -Wall -std=c++14 <name of cpp file> -o <name of executable no .ccp needed>
// this will generate the executable.
// To run it simply type ./<name of executable>

// compiling and linking is building
