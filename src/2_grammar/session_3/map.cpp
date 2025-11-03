#include <iostream>
#include <map>

int main()
{
    std::map<std::string, int> persons = {
        {"Alice", 18},
        {"Bob", 20}};

    std::cout << persons["Alice"] << std::endl;
    std::cout << persons["Bob"] << std::endl;

    std::cout << persons.size() << std::endl;

    persons.erase("Bob");

    std::cout << persons.size() << std::endl;

    return 0;
}