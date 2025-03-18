#include <iostream>
// #include <random>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::cout << "Here is a random number from the mt19937 RNG: ";
    std::uniform_int_distribution<> dis(1, 50000);
    std::cout << dis(gen) << std::endl;
    return 0;
}