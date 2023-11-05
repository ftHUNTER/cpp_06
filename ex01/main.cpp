#include <iostream>
#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
    Data mystruct;
    mystruct.x = 5;
    mystruct.c = 'A';
    Data *ptrmystruct;
    ptrmystruct = &mystruct;

    Serializer a;
    uintptr_t uintptr = a.serialize(ptrmystruct);
    Data *newstructptr = a.deserialize(uintptr);
    std::cout << newstructptr << std::endl;
    std::cout << ptrmystruct << std::endl;
}