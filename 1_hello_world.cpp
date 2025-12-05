#include <iostream>

// main function is the entry point of C++ program
int main() {
    std::cout << "Hello, World" << std::endl;

    // or

    std::cout << "Hello, World\n";

    // or

    // cout and endl are functions that are defined in the iostream package
    // in iostream package they are under std namespace

    using namespace std; // adding this line will make it unnecessary to annotate namespaces

    cout << "Hello, World" << endl;
}

// the returned value by the main functions indicates the result of the execution of the program
// 0 => success
// there is no "string" primitive in C++
