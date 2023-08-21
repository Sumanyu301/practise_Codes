#include <iostream>

int main() {
    int x = 42;
    int* p1 = &x;
    int* p2 = &x;

    std::cout << "p1: " << p1 << std::endl; // Output: Address of x
    std::cout << "p2: " << p2 << std::endl; // Output: Address of x

    return 0;
}
