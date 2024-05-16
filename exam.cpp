#include <iostream>

double distance(int time){
    return (9.8 * time * time) / 2;
}

double high(int time, double height){
    double dist{distance(time)};
    return height - dist;
}

int main(){
    double height{};
    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> height;

    std::cout << "At " << 0 << " seconds, the ball is at height: " << high(0, height) << " meters \n";
    std::cout << "At " << 1 << " seconds, the ball is at height: " << high(1, height) << " meters \n";
    std::cout << "At " << 2 << " seconds, the ball is at height: " << high(2, height) << " meters \n";
    std::cout << "At " << 3 << " seconds, the ball is at height: " << high(3, height) << " meters \n";
    std::cout << "At " << 4 << " seconds, the ball is at height: " << high(4, height) << " meters \n";
    std::cout << "At " << 5 << " seconds, the ball is at height: " << high(5, height) << " meters \n";
}

// I beleive this could have been made a lot better by adding the statements to a funstion and then also checking is the
// ball is less than zero height in other to print on the floor.
