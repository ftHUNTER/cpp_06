#include "utilis.hpp"
#include <cstdlib>

Base * generate(void)
{
    std::srand(static_cast<unsigned int>(std::time(0)));
    int randomNumber = (std::rand() % 3);
    switch (randomNumber)
    {
        case 0 :
            return new A();
        case 1 : 
            return new B();
        case 2 :
            return new C();
    }
    return NULL;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "It's a A object." << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "It's a B object." << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "It's a C object." << std::endl;
    else
        std::cout << "Unknown object type." << std::endl;

}

void identify(Base& p)
{
    try
    {
        dynamic_cast<A&>(p);
        std::cout << "It's a A object." << std::endl;
    }
    catch(...)
    {
        try
        {
            dynamic_cast<B&>(p);
            std::cout << "It's a B object." << std::endl;

        }
        catch(...)
        {
            try
            {
                dynamic_cast<C&>(p);
                std::cout << "It's a C object." << std::endl;

            }
            catch(...)
            {
                std::cout << "Unknown object type." << std::endl;
            }
        }
    }
}