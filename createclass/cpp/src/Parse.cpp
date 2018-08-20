#include <Parse.hpp>
#include <Data.hpp>
#include <Enum.hpp>
#include <iostream>
#include <cstring>

Parse::Parse()
{

}

Parse::~Parse()
{
    
}

Parse::Parse(const Parse & src)
{
    *this = src;
}

Parse & Parse::operator=(const Parse & src)
{
    if (this != &src)
    {
        *this = src;
    }
    return *this;
}

bool CheckForFlag(const char * str, Type & type)
{
    Type temp = type;
    if (strcmp(str,"-p") == 0)
        type = Type::Location;
    else if (strcmp(str,"-i") == 0)
        type = Type::Inherit;
    else if (strcmp(str,"-I") == 0)
        type = Type::Interface;
    else if (strcmp(str,"-n") == 0)
        type = Type::Namespace;
    if (temp == type)
        return false;
    return true;
}

void Parse::parse(const char **commands, const int & count)
{
    Type type = Type::File;
    for (int i = 1; i < count; i++)
    {
        if (CheckForFlag(commands[i], type))
            continue;
        
    }
}