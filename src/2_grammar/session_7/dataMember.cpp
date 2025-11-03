#include <iostream>

class Rectangle
{
public:
    int height_;
    int width_;
};

int main()
{
    Rectangle r;
    r.height_ = 20;
    r.width_ = 30;

    std::cout << r.height_ << std::endl;
    std::cout << r.width_ << std::endl;

    Rectangle *pr = &r;
    (*pr).height_ = 200;
    (*pr).width_ = 300;

    std::cout << r.height_ << std::endl;
    std::cout << r.width_ << std::endl;

    pr->height_ = 400;
    pr->width_ = 600;

    std::cout << r.height_ << std::endl;
    std::cout << r.width_ << std::endl;

    return 0;
}
