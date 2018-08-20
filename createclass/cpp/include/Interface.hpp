#ifndef INTERFACE_HPP
#define INTERFACE_HPP

class Interface
{
    public:
        Interface();
        ~Interface();
        Interface(const Interface & src);

        Interface & operator=(const Interface & src);

    private:
};

#endif