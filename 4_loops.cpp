#include <array>
#include <iostream>
#include <vector>

int main() {

    // C-Style for loops
    for(int i = 0; i < 5; i++) {
        std::cout << i << std::endl;
    }

    std::cout << "----------------------\n";

    //all arguments inside the loops are optional
    int j = 0;
    for(;;){
        std::cout << j << std::endl;
        j += 1;
        if (j == 10) break;
    }

    std::cout << "----------------------\n";

    // C style while loops
    int i = 0;
    while (i < 10) {
        std::cout << i << std::endl;
        i += 1;
    }

    std::cout << "----------------------\n";

    // range based loops for arrays, vectors
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    for(int i : arr) {
        std::cout << i << std::endl;
    }

    std::cout << "----------------------\n";

    std::vector<int> vec = {1, 2, 3, 4, 5};
    for (int i : vec) {
        std::cout << i << std::endl;
    }

    std::cout << "----------------------\n";

    // range based for loops work for normal C-style arrays also
    // auto keyword is used to indicate that type inference must be done by the compiler
    int arr1[5] = {1, 2, 3, 4, 5};
    for(auto i : arr1) {
        std::cout << i << std::endl;
    }

    std::cout << "----------------------\n";

    // in all the above range based for loops the current element is being copied into i
    // their scope ends after current iteration is done and thus they are deleted
    // to not have this copying happening we can use references
    for(auto &i : arr1) {
        std::cout << i << std::endl;
    }

    std::cout << "----------------------\n";

    // do - while loop
    // the code in the do block is run atleast once irrespective of the condition in while block
    i = 0;
    do {
        std::cout << arr[i] << std::endl;
        i += 1;
    } while (i < 5);

    // to fill a uninitialized array with a value
    std::array<int, 5> arr2;

    std::fill(arr2.begin(), arr2.end(), 3);

    std::cout << "----------------------\n";

    for (auto i : arr2) {
        std::cout << i << std::endl;
    }

    // continue and break affect the control flow of the loop
    // continue (skip to the next iteration)
    for(int i = 0; i < 5; i++) {
        if (i == 3) continue;
        std::cout << i << std::endl;
    }

    std::cout << "----------------------\n";

    // break (stop the loop)
    for(int i = 0; i < 5; i++) {
        if (i == 3) break;
        std::cout << i << std::endl;
    }

    std::cout << "----------------------\n";

    // in nested loop break and continue will have their effect on the inner most loop
    for(int i = 1; i < 5; i++) {
        for(int j = 1; j < 5; j++){
            if (j % 2 == 0) continue;
            std::cout << i * j << std::endl;
        }

        if (i % 3 == 0) break;
    }
}
