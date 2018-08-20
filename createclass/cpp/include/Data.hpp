#ifndef DATA_HPP
#define DATA_HPP

#include <string>
#include <vector>

class Data
{
    public:
        Data()
        {}

        ~Data()
        {}
        
        static std::string _srcPath;
        static std::string _includePath;
        static std::vector<std::string> _classes;
        static std::vector<std::string> _inheritedFrom;
        static std::vector<std::string> _nameSpaces;
        static std::vector<std::string> _interface;

};

#endif