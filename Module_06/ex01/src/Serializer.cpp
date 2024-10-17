#include "Serializer.h"

uintptr_t Serializer::serialize(Data *ptr)
{
    uintptr_t serialized = reinterpret_cast<uintptr_t>(ptr);
    return serialized;
}

Data *Serializer::deserialize(uintptr_t raw)
{
    Data* deserialized = reinterpret_cast<Data*>(raw);
    return deserialized;
}
