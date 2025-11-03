#include <iostream>

class Rectangle
{
public:
    int Area()
    {
        return this->height_ * this->width_;
    };

    int height_;
    int width_;
};

int main()
{
    Rectangle rectangle;
    rectangle.height_ = 10;
    rectangle.width_ = 20;
    std::cout << rectangle.Area() << std::endl;

    return 0;
}