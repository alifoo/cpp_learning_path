#include <iostream>

// Function declaration
int add(int a, int b);
void printMessage();

int main() {
    int num1 = 5;
    int num2 = 10;

    // Calling the add function
    int result = add(num1, num2);
    std::cout << "The sum is: " << result << std::endl;

    // Calling the printMessage function
    printMessage();

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

// Another function definition
void printMessage() {
    std::cout << "Hello, world!" << std::endl;
}
