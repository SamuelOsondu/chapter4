#include <iostream>

int main()
{
    std::cout << "Enter a character: ";
    char ch{};
    std::cin >> ch;
    std::cout << "You entered the value " << ch << "\n";
    char ch2;
    std::cin >> ch2;
    std::cout << "Entered: " << ch2 << "\n";
}