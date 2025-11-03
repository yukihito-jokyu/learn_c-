#include <iostream>

namespace A
{
    int count = 2;
    namespace P
    {
        int count = 4;

        int GetCount()
        {
            return count;
        }
    }
}

namespace B
{
    int count = 6;
}

int x = 20;

int main()
{
    int x = 40;

    std::cout << A::count << std::endl;
    std::cout << A::P::count << std::endl;
    std::cout << B::count << std::endl;

    std::cout << x << std::endl;
    std::cout << ::x << std::endl;

    return 0;
}