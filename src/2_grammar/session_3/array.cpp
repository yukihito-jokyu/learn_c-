#include <iostream>
#include <array>

int main()
{
    int x[5] = {0, 1, 2, 3, 4};
    std::cout << x[0] << std::endl;

    int y = x[2];
    std::cout << y << std::endl;

    int *p = x;
    std::cout << *p << std::endl;
    std::cout << *(p + 1) << std::endl;
    std::cout << *(p + 2) << std::endl;
    std::cout << *(p + 3) << std::endl;
    std::cout << *(p + 4) << std::endl;

    std::cout << std::size(x) << std::endl;

    std::array<int, 5> std_array = {0, 1, 2, 3, 4};
    std::cout << std_array[0] << std::endl;
    std::cout << std_array.size() << std::endl;

    return 0;
}