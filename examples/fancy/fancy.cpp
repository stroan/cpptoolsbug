#include <demolib.h>

#include <iostream>

int main(int argc, char** argv) {
    std::cout << "Enter number: ";

    int a = 0;
    std::cin >> a;
    
    

    std::cout << "Fancy: " << fancy(a) << std::endl;

    return 0;
}