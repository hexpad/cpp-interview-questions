#include <iostream>

int doubling(int num) {
    return num * 2;
}

int main() {
    int number{};
    std::cout << "Enter a number : ";
    std::cin >> number;
    std::cout << "Double: " << doubling(number) << "\n";
}
