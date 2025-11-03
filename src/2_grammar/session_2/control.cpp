#include <iostream>

int main()
{
    int x = 5;

    if (x == 5)
    {
        std::cout << x << std::endl;
    }

    switch (x)
    {
    case 0:
        std::cout << 0 << std::endl;
        break;
    case 5:
        std::cout << 5 << std::endl;
        break;
    default:
        std::cout << "unkown" << std::endl;
        break;
    }

    int limit = 5;
    bool done = false;

    while (!done)
    {
        limit += limit - 3;

        std::cout << limit << std::endl;

        if (limit % 5 == 0)
        {
            done = true;
        }
    }

    for (int i = 0; i < 10; ++i)
    {
        std::cout << i << std::endl;
    }

    return 0;
}