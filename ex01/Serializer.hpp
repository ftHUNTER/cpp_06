#include "Data.hpp"
#include <stdint.h>

class  Serializer
{
    public :
        Serializer();
        Serializer(const Serializer& ref);
        ~Serializer();
        Serializer& operator=(const Serializer& ref);
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
};