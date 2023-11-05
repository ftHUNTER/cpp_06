#include "Base.hpp"
#include "utilis.hpp"

int main()
{
    Base *ptr = generate();
    A der;
    Base &ptr2 = der;
    identify(ptr);
    identify(ptr2);

    delete ptr;
}