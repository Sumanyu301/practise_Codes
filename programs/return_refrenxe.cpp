#include <iostream>

int main() {
    int x = 5;         // Declare an integer variable x and assign a value 5
    int y = 10;        // Declare another integer variable y and assign a value 10
    
    int r = x;         // r is a copy of x's value, changes to r won't affect x
    int &ref = y;      // ref is an alias for y, changes to ref will affect y
    std::cout <<&r<< std::endl;;
    std::cout <<&x<< std::endl;;
    std::cout <<&y<< std::endl;;
    std::cout <<&ref<< std::endl;;
    r = 20;            // Changes r, but x remains 5
    ref = 30;          // Changes y to 30 using the reference

    std::cout << "x: " << x << std::endl;       // Output: x: 5
    std::cout << "y: " << y << std::endl;       // Output: y: 30

    return 0;
}
