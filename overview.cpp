#include <iostream>
#include <vector>
#include <string>

// Function declaration: Declares a function named 'add' that takes two integers as parameters and returns an integer.
int add(int a, int b);

int main() {
    // Variables and data types
    int number = 5; // Integer variable
    double pi = 3.14159; // Double precision floating-point variable
    char initial = 'M'; // Character variable
    std::string name = "Malik"; // String variable
    bool isProgrammingFun = true; // Boolean variable

    // Output (printing to the console)
    std::cout << "Name: " << name << std::endl; // Print string to console
    std::cout << "Initial: " << initial << std::endl; // Print character to console
    std::cout << "Number: " << number << std::endl; // Print integer to console
    std::cout << "Pi: " << pi << std::endl; // Print double to console
    std::cout << "Is programming fun? " << (isProgrammingFun ? "Yes" : "No") << std::endl; // Print boolean to console

    // Arithmetic operators
    int sum = number + 10; // Addition
    int difference = number - 2; // Subtraction
    int product = number * 3; // Multiplication
    double quotient = number / 2.0; // Division
    int remainder = number % 3; // Modulus (remainder of division)

    // Printing results of arithmetic operations
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;

    // Conditional statements
    if (number > 0) {
        std::cout << "The number is positive." << std::endl; // Executed if 'number' is greater than 0
    } else if (number < 0) {
        std::cout << "The number is negative." << std::endl; // Executed if 'number' is less than 0
    } else {
        std::cout << "The number is zero." << std::endl; // Executed if 'number' is neither greater nor less than 0
    }

    // Loop (for loop)
    for (int i = 0; i < 5; ++i) {
        std::cout << "Iteration: " << i << std::endl; // Loop runs 5 times, printing the value of 'i' each time
    }

    // Loop (while loop)
    int count = 5;
    while (count > 0) {
        std::cout << "Count: " << count << std::endl; // Prints the value of 'count'
        --count; // Decreases 'count' by 1 each iteration
    }

    // Array: Fixed-size collection of elements
    int numbers[] = {1, 2, 3, 4, 5};

    // Vector (dynamic array): Can change size at runtime
    std::vector<int> numVector{6, 7, 8, 9, 10}; // Correctly using initializer list

    // Accessing elements of array and vector
    std::cout << "First element of array: " << numbers[0] << std::endl; // Access and print the first element of the array
    std::cout << "First element of vector: " << numVector[0] << std::endl; // Access and print the first element of the vector

    // Function call: Calls the 'add' function with the first elements of 'numbers' and 'numVector' as arguments
    int result = add(numbers[0], numVector[0]);
    std::cout << "Sum of first elements: " << result << std::endl; // Print the result of the function call

    return 0; // Indicate that the program ended successfully
}

// Function definition: Defines the 'add' function that returns the sum of two integers
int add(int a, int b) {
    return a + b; // Return the sum of 'a' and 'b'
}

// Great C++ Resources:
// https://www.w3schools.com/cpp/default.asp
// https://devdocs.io/cpp/