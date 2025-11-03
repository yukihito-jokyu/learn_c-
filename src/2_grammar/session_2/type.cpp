#include <iostream>

enum Day
{
    Sun,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat
};

enum class ClassDay
{
    Sun,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat
};

int main()
{
    bool ok = true;
    char x = 'x';
    unsigned int y = 4000000000;

    Day day = Fri;
    std::cout << day << std::endl;

    ClassDay class_day = ClassDay::Fri;

    return 0;
}