#include <iostream>

int main() {
    int number = 10;

    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else {
        std::cout << "The number is not positive." << std::endl;
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << "Iteration: " << i << std::endl;
    }

    return 0;
}
