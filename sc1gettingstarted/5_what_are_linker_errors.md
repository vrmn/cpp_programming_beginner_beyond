A linker error happens when the linker is having trouble linking all the object files together to create an executable.

Usually there is a library or object file that is missing.

This can be a tricky issue to fix. Sometimes its just a matter of getting the paths correct so that the linker knows where the missing pieces are.

example

#include <iostream>

extern int x;


int main() {

  std::cout << "hellow world" << std::endl;

  std::cout << x;

  return 0;

}


the linker error that results is, undefined reference to 'x'  but no errors or warning
