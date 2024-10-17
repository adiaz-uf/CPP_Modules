# include "Data.h"
# include "Serializer.h"

int main()
{
    Data *data1 = new Data;
    data1->x = 1;
    data1->y = 3;
    std::cout << "Original Data" << std::endl;
    std::cout << "data x: " << data1->x << std::endl;
    std::cout << "data y: " << data1->y << std::endl << std::endl;

    uintptr_t s = Serializer::serialize(data1);
    Data* data2 = Serializer::deserialize(s);

    std::cout << "Deserialized Data" << std::endl;
    std::cout << "data x: " << data2->x << std::endl;
    std::cout << "data y: " << data2->y << std::endl;

    delete data1;
    return 0;
}
