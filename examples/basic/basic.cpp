#include <demolib.h>

#include <iostream>

int main(int argc, char** argv) {
    std::cout << "Enter number: ";

    int b = 0;
    std::cin >> b;

    std::cout << "Basic: " << basic(b) << std::endl;
    return 0;
}