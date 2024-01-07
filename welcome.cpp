#include <iostream>

// ANSI color codes
#define RESET   "\033[0m"
#define YELLOW  "\033[33m"
#define BOLD    "\033[1m"

int main() {
    std::cout << YELLOW << BOLD << "***************************************" << RESET << std::endl;
    std::cout << YELLOW << BOLD << "*      Welcome to today's video !       *" << RESET << std::endl;
    std::cout << YELLOW << BOLD << "***************************************" << RESET << std::endl;

    return 0;
}

















































