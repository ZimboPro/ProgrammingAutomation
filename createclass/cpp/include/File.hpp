#ifndef FILE_HPP
#define FILE_HPP

#include <string>

class File
{
    public:
        static bool Exists(std::string path);
        static std::string Read(std::string path);      
};

#endif