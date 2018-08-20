#ifndef STANDARD_HPP
#define STANDARD_HPP

class Standard
{
    public:
        Standard();
        ~Standard();
        Standard(const Standard & src);

        Standard & operator=(const Standard & src);

    private:
};

#endif