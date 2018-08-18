#ifndef INHERIT_HPP
#define INHERIT_HPP

class Inherit
{
    public:
        Inherit();
        ~Inherit();
        Inherit(const Inherit & src);

        Inherit & operator=(const Inherit & src);

    private:
};

#endif