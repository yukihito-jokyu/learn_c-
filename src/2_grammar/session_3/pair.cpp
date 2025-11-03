#include <iostream>
#include <string>
#include <utility>
#include <tuple>

int main()
{
    std::pair<std::string, int> person{"Bob", 20};

    std::cout << std::get<0>(person) << std::endl;
    std::cout << std::get<1>(person) << std::endl;

    std::cout << person.first << std::endl;
    std::cout << person.second << std::endl;

    std::string name;
    int age;

    std::tie(name, age) = person;

    std::cout << name << std::endl;
    std::cout << age << std::endl;

    return 0;
}