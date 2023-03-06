#include <iostream>

int xvalue(int x);
int yreference(int& y);


int main() {
    int x = 0;
    int y = 0;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> x;
    std::cin >> y;
    std::cout << "Your first squared is number: " << xvalue(x) << std::endl;
    std::cout << "Your second number squared is: " << yreference(y) << std::endl;
    return 0;
}

int xvalue(int x) {
    return x*x;
}

int yreference(int& y) {
    return y*y;
}
