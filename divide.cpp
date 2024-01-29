#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Division table for " << number << ":\n";
    for (int i = 1; i <= 10; ++i) {
        if (number == 0) {
            std::cout << "Cannot divide by zero.\n";
            break;
        }
        std::cout << number << " / " << i << " = " << (static_cast<double>(number) / i) << "\n";
    }

    return 0;
}
