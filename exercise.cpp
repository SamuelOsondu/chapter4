# include <iostream>

std::string prime(int num){
    if (num == 2 | num == 3 | num == 5 | num == 7)
        return std::string("The digit is prime!");
    else
        return std::string("The digit entered is not prime!");
}

int main(){
    int x{};
    std::cout << "Enter a number 0 through 9 (inclusive): ";
    std::cin >> x;
    if (x > 9)
        std::cout << "Entered number is not within the given range, hence invalid! \n";
    else
        std::cout << prime(x);
}
