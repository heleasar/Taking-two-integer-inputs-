#include <iostream>

int main() {
    int userNum, userNum2;

    // Get the first user input
    std::cout << "Enter integer:" << std::endl;
    std::cin >> userNum;

    // Output the first user input
    std::cout << "You entered: " << userNum << std::endl;

    // Calculate and output squared and cubed
    int squared = userNum * userNum;
    int cubed = userNum * userNum * userNum;
    std::cout << userNum << " squared is " << squared << std::endl;
    std::cout << "And " << userNum << " cubed is " << cubed << "!!" << std::endl;

    // Get the second user input
    std::cout << "Enter another integer:" << std::endl;
    std::cin >> userNum2;

    // Calculate and output the sum and product of the two inputs
    int sum = userNum + userNum2;
    int product = userNum * userNum2;
    std::cout << userNum << " + " << userNum2 << " is " << sum << std::endl;
    std::cout << userNum << " * " << userNum2 << " is " << product << std::endl;

    return 0;
}
