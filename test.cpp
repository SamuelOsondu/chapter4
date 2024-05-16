#include <iostream> 

double input(){
    double x{};
    std::cout << "Enter a double: ";
    std::cin >> x;
    return x;
}

char symbol(){
    char sign{};
    std::cout << "Enter +, -, *, or /: ";
    std::cin >> sign;
    return sign;
}

double answer(double input1, double input2, char sign){
    if (sign == '+')
        return input1 + input2;
    else if (sign == '-')
        return input1 - input2;
    else if (sign == '*')
        return input1 * input2;
    else if (sign == '/')
        return input1 / input2;
}

int main(){
    double value1{input()};
    double value2{input()};
    char sign{symbol()};
    double ans{answer(value1, value2, sign)};
    std::cout << value1 <<" " << sign << " "<< value2 << " " << "is " << ans;

}