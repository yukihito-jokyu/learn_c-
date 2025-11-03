#include <iostream>

int main()
{
    int x;
    x = 5;

    int input;
    std::cout << x << std::endl;

    const int not_change = 5;
    std::cout << not_change << std::endl;

    // constexprの値はコンパイル時に決定する
    constexpr int c = 5;

    auto y = 5;

    return 0;
}