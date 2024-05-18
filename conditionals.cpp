#include <iostream>

int main() {
    int a = 5;
    int b = 10;
    
    if (a > 0) {
        if (b > 5) {
            std::cout << "a is positive and b is greater than 5" << std::endl;
        } else {
            std::cout << "a is positive but b is not greater than 5" << std::endl;
        }
    } else {
        std::cout << "a is not positive" << std::endl;
    }

    return 0;
}
