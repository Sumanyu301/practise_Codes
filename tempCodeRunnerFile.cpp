#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Searching for the value 3 in the array
    int valueToFind = 3;
    auto result = std::find(arr, arr + size, valueToFind);

    // Check if the value was found
    if (result != std::end(arr)) {
        std::cout << "Value " << valueToFind << " found at index " << std::distance(arr, result) << std::endl;
    } else {
        std::cout << "Value " << valueToFind << " not found in the array" << std::endl;
    }

    return 0;
}
