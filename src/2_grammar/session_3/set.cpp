#include <iostream>
#include <set>

int main()
{
    std::set<std::string> persons = {
        "Alice",
        "Bob"};

    persons.insert("Eve");

    std::cout << persons.size() << std::endl;

    persons.erase("Bob");

    std::cout << persons.size() << std::endl;

    return 0;
}