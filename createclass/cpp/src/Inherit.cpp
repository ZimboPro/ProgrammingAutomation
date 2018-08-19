#include <Inherit.hpp>

Inherit::Inherit()
{

}

Inherit::~Inherit()
{
    
}

Inherit::Inherit(const Inherit & src)
{
    *this = src;
}

Inherit & Inherit::operator=(const Inherit & src)
{
    if (this != &src)
    {
        *this = src;
    }
    return *this;
}