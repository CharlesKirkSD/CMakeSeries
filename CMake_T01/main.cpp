#include <iostream>
#include <concepts>

template <typename T>
requires std::integral<T>
T add(T a, T b)
{
    return a + b;
}

int main(int argc, char* argv[])
{
    std::cout << "Hello from C++20 with CMake on Linux/Windows" << std::endl;
    std::cout << "The sum is : " << add(7,3) << std::endl;
    std::cout << "Additional line added in WSL Ubuntu to test Git!" << std::endl; 
    return 0;
}
