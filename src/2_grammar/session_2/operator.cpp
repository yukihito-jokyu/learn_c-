#include <iostream>
#include <bitset>

int main()
{
    int ix = 100;
    int iy = 50;
    double dx = 100.0;
    double dy = 50.0;

    auto a = ix / iy;
    auto b = ix / dy;
    auto c = dx / iy;
    auto d = dx / dy;

    auto bits_a = std::bitset<8>("00001111");
    std::cout << ~bits_a << std::endl;
    std::cout << (bits_a << 2) << std::endl;
    std::cout << (bits_a >> 2) << std::endl;

    auto bits_b = std::bitset<8>("00111100");
    std::cout << (bits_a & bits_b) << std::endl;
    std::cout << (bits_a | bits_b) << std::endl;
    std::cout << (bits_a ^ bits_b) << std::endl;

    return 0;
}