#include <Interface.hpp>

Interface::Interface()
{

}

Interface::~Interface()
{
    
}

Interface::Interface(const Interface & src)
{
    *this = src;
}

Interface & Interface::operator=(const Interface & src)
{
    if (this != &src)
    {
        *this = src;
    }
    return *this;
}