#include <iostream>
#include <string>
#include <tuple>

int main()
{
    std::tuple<std::string, int> person{"Bob", 20};

    std::cout << std::get<0>(person) << std::endl;
    std::cout << std::get<1>(person) << std::endl;

    std::string name;
    int age;

    std::tie(name, age) = person;

    std::cout << name << std::endl;
    std::cout << age << std::endl;

    return 0;
}