# include "A.h"
# include "B.h"
# include "C.h"
# include <cmath>

Base* generate(void)
{
    int i = rand() % 3;

    if (i == 0)
        return (new A);
    else if (i == 1)
        return (new B);
    else 
        return (new C);
}

/* void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Object is type A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Object is type B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Object is type C" << std::endl;
    else
        std::cout << "Object is not type A, B, or C" << std::endl;
} */

void identify(Base &p)
{
    try
    {
        A& isA = dynamic_cast<A&>(p);
        (void)isA;
        std::cout << "Object is type A" << std::endl;
    }
    catch(const std::exception& e)
    {
        //std::cerr << "Object Type is not A" << std::endl;
    }

    try
    {
        B& isB = dynamic_cast<B&>(p);
        (void)isB;
        std::cout << "Object is type B" << std::endl;
    }
    catch(const std::exception& e)
    {
        //std::cerr << "Object Type is not B" << std::endl;
    }

    try
    {
        C& isC = dynamic_cast<C&>(p);
        (void)isC;
        std::cout << "Object is type C" << std::endl;
    }
    catch(const std::exception& e)
    {
        //std::cerr << "Object Type is not C" << std::endl;
    }
    
}

int main()
{
    srand(time(NULL)); // Seed for random number generation
    Base* b = generate();
    identify(*b);
    delete b;
    return 0;
}
