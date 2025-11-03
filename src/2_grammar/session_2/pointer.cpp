#include <iostream>

int main()
{
    int x = 5;
    std::cout << x << std::endl;
    int *p = &x;
    std::cout << p << std::endl;
    int *n_p = nullptr;
    std::cout << n_p << std::endl;
    int y = *p;
    std::cout << y << std::endl;
    int &r = x;
    std::cout << r << std::endl;
    return 0;
}