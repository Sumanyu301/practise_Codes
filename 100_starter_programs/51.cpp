// • Use the random module in Python to generate a random even number in the range of [1,100] (including 1 and 100 both)
// • You have to complete the function generateRandomEven and return a random even number
// • The output for the program will be handled by the backend
// Input
// • There is no need of input in this problem
// • You don't have to import the random function, that is taken care of by the OJ
// Output
// • The output is handled by the OJ itself, just complete the function and return the random number generated
// Sample Input 1
// 2
// Sample Output 1
// True
#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int generateRandomEven() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    
    // Generate a random number between 1 and 50 (inclusive)
    int random_number = std::rand() % 50 + 1;
    
    // Double the random number to make it even
    int random_even = random_number * 2;
    
    return random_even;
}

int main() {
    int result = generateRandomEven();
    std::cout << result << std::endl;
    
    return 0;
}
