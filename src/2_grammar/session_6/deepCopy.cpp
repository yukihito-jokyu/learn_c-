#include <iostream>

void ChangeToFifty1(int v)
{ // ディープコピー
    v = 50;
}

void ChangeToFifty2(int *v)
{ // シャローコピー
    *v = 50;
}

int main()
{
    int x = 100;
    int y = x;
    y = 50;
    std::cout << x << std::endl;

    int *py = &x;
    *py = 50;
    std::cout << x << std::endl;

    int a = 100;
    ChangeToFifty1(a);
    std::cout << a << std::endl; // 100

    int b = 100;
    ChangeToFifty2(&b);
    std::cout << b << std::endl; // 50

    return 0;
}