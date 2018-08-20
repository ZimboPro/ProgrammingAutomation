#include <Standard.hpp>

Standard::Standard()
{

}

Standard::~Standard()
{
    
}

Standard::Standard(const Standard & src)
{
    *this = src;
}

Standard & Standard::operator=(const Standard & src)
{
    if (this != &src)
    {
        *this = src;
    }
    return *this;
}