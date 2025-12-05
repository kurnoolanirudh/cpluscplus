#include <iostream>
#include <string>

int main() {
    // varibale declaration
    int num; // C++ is a statically typed language with no automatic type inference
    // by default local values declared like above contain garbage values

    // printing integers in C++
    std::cout << num << std::endl ;

    num = 1;

    std::cout << num << std::endl ;

    // declaration and definition
    int num1 = 3;

    std::cout << num1 << std::endl;

    // as C++ is a superset of C of C's printf is available here
    printf("%d\n", num1);

    // everything is mutable by default in C++

    // primtive data types in C++ = int, float, char, bool,
    // short, double, long (old C++)
    // int8_t, int16_t , int32_t, int64_t (modern C++ int types )

    // the below things are being considered as characters by cout . why ???
    int8_t byte_num = 124;
    std::cout << byte_num << std::endl;
    int16_t short_int_num = 255;
    std::cout << byte_num << std::endl;
    int32_t long_int_num = 511;
    std::cout << byte_num << std::endl;
    int64_t long_long_num = 1023;
    std::cout << byte_num << std::endl;

    // floating point numbers
    float f_num = 1.23f; // f is to ensure that this is not considered as a double as double is the default float type
    std::cout << f_num << std::endl;

    // to know the size of a variable
    std::cout << sizeof(f_num) << std::endl;

    double d_num = 3.4214;
    std::cout << d_num << std::endl;
    std::cout << sizeof(d_num) << std::endl;

    // modern C++ float types
    _Float32 f_num_1 = 1.231f;
    std::cout << f_num_1 << std::endl;
    std::cout << sizeof(f_num_1) << std::endl;

    _Float64 f_num_2 = 1.23141;
    std::cout << f_num_2 << std::endl;
    std::cout << sizeof(f_num_2) << std::endl;

    // char - 1 byte
    char c = 'A';

    // strings in C++ are just character arrays.
    const char* s = "Hello";
    std::cout << s << std::endl;

    // another way to declare a string
    std::string s1 = "Hello, World";
    std::cout << s1 << std::endl;

    // to make a variable immutable
    const int num2 = 1;
    std::cout << num2 << std::endl ;
    // num2 += 1; // will give a error

    // there are ways to mutate num2 using casting

    // constexpr forces the compiler to evaluate something at compile time and variable of constexpr type are immutable

    constexpr int res = 2 * 2 + 1;

    // {} is used to define a scope
    {
        // variables defined here cannot be accessed from the outside
        int p = 4;
        // but variables defined outside this scope are accessible from here
        std::cout << num << std::endl;

        // as this a inner scope num can be shadowed here
        char num = 'A';
    }
}
