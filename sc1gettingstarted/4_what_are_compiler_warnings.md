DO NOT IGNORE COMPILER WARNINGS. There should be no warnings

the compiler has recognized an issue with your code that could lead to a potential problem

its only a warning because the compiler is still able to generate correct machine code.


int main() {

int favorite_number;

std::count << favorite_number << std::endl;

return 0;

}


this will give the warning favoirte_number is not initialized

to fix?

int main() {

int favorite_number;

std::count << favorite_number << std::endl;

return 0;

}
