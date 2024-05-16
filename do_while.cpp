#include <iostream>

int main() {
    int i = 0;
    do {
        std::cout << "Iteration " << i + 1 << std::endl;
        i++;
    } while (i < 5);
    return 0;
}