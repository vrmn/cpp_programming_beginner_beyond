//ask user to pick favorite number between 1 and 100
// then print amazing thats my favorite number too!
// then print out no really!! 24 is my favorite number!



#include <iostream>

int main() {
    
    int favorite_number;
    
    std::cout << "Pick your favorite Number between 1 and 100" << std::endl;
    std::cin >> favorite_number;
    std::cout << "Amazing!! thats's my favorite number too!" << std::endl;
    std::cout << "not really " << favorite_number << " is my favorite too!" << std::endl;
    
    return 0;
}