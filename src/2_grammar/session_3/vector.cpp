#include <iostream>
#include <vector>

int main()
{
    std::vector<int> x = {0, 1, 2, 3, 4};
    std::cout << x.size() << std::endl;

    x.emplace_back(5);
    std::cout << x.size() << std::endl;

    x.pop_back();
    std::cout << x.size() << std::endl;

    auto px = x.data();
    std::cout << *px << std::endl;

    return 0;
}