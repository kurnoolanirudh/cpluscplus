#include <iostream>
#include <array>

int main() {
    // arrays in C++ can only contain homogeneous data
    // data of arrays is stored in a contiguous block of memory
    // arrays in C++ are 0 - indexed
    int arr[5]; // by default like normal local variables all the elements of a uninitialized array are set to a garbage value

    // accessing the first element of a array
    std::cout << arr[0] << std::endl;

    // setting the value at a particular index in a array
    arr[0] = 1;

    std::cout << arr[0] << std::endl;
}
