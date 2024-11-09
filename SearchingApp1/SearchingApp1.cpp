#include <iostream>
#include "Searching.h"

int main() {
    std::vector<int> vec = { 10, 20, 30, 30, 30, 40, 50, 60, 70, 70 };
    int target;

    std::cout << "Enter target value: ";
    std::cin >> target;

    int index = binarySearch(vec, target);
    if (index != -1) {
        std::cout << "Binary search. Element found at index: " << index << std::endl;
    }
    else {
        std::cout << "Binary search. Element not found in the vector." << std::endl;
    }

    index = binarySearchFirst(vec, target);
    if (index != -1) {
        std::cout << "Binary search first occurrence. Element found at index: " << index << std::endl;
    }
    else {
        std::cout << "Binary search first occurrence. Element not found in the vector." << std::endl;
    }

    index = linearSearch(vec, target);
    if (index != -1) {
        std::cout << "Linear search. Element found at index: " << index << std::endl;
    }
    else {
        std::cout << "Linear search. Element not found in the vector." << std::endl;
    }

    return 0;
}
