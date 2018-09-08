#ifndef PARSE_HPP
#define PARSE_HPP

#include <Enum.hpp>
#include <string>
#include <vector>

struct Combination
{
    std::string variable;
    Type type;
    Combination(char * str, Type t) : variable(str), type(t) {}
};

class Parse
{
    public:
        Parse();
        ~Parse();
        Parse(const Parse & src);

        Parse & operator=(const Parse & src);
        void parse(char **commands, const int & count);
        void createClass();

    private:
        std::vector<Combination> _flags;
};

#endif