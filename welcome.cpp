#include <iostream>
#define BOLD    "\033[1m"
// ANSI color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
int main() {
    std::cout << MAGENTA << BOLD << "************************************************" << RESET << std::endl;
    std::cout << YELLOW << BOLD << "*      Welcome to BongPhysik&Wanderlust (BPW) !       *" << RESET << std::endl;
    std::cout << MAGENTA << BOLD << "************************************************" << RESET << std::endl;
    std::cout << BLUE << BOLD << "                       Topic                     " <<RESET << std::endl;
    
    std::cout << CYAN << BOLD << " 1. Customize your GitHub profile   "<< RESET << std::endl;
    std::cout << CYAN << BOLD << " 2. How to create git repository (SSH and GPG keys)  "<< RESET << std::endl;

    std::cout << CYAN << BOLD << " 3. How to git commit your files to GitHub  "<< RESET << std::endl;
    std::cout << CYAN << BOLD << " 4. How to track history of your changes in GitHub "<< RESET << std::endl;
    std::cout << CYAN << BOLD << " 5. git cheetsheet"<< RESET << std::endl;

    return 0;
}

















































