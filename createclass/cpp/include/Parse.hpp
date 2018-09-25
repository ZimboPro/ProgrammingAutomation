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

struct ParseStrings
{
    std::string _className;
    std::string _classHeader;
    std::string _classIncludePath;
    std::vector<std::string> _baseClassName;
    std::vector<std::string> _baseIncludePath;
};

class Parse
{
    public:
        Parse();
        ~Parse();
        Parse(const Parse & src);

        Parse & operator=(const Parse & src);
        void parseArguments(char **commands, const int & count);

    private:
        void createClass();
        std::vector<Combination> _flags;
        // ParseStrings _parsedVariables;
};

#endif