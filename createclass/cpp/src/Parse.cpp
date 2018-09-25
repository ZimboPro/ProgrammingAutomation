#include <Parse.hpp>
#include <Data.hpp>
#include <Enum.hpp>
#include <iostream>
#include <cstring>
#include <File.hpp>

#include <fmt/format.h>

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

void checkFlag(const char * str, Type & currentType, const char * flag, Type flagType)
{
    if (strcmp(str, flag) == 0)
        currentType = flagType;
}

bool CheckForFlag(const char * str, Type & type)
{
    Type temp = type;
    checkFlag(str, type, "-p", Type::Location);
    checkFlag(str, type, "-i", Type::Inherit);
    checkFlag(str, type, "-I", Type::Interface);
    checkFlag(str, type, "-n", Type::Namespace);
    if (temp == type)
        return false;
    return true;
}

void Parse::parseArguments(char **commands, const int & count)
{
    Type type = Type::File;
    for (int i = 1; i < count; i++)
    {
        if (CheckForFlag(commands[i], type))
            continue;
        Combination temp(commands[i], type);        
        this->_flags.push_back(temp);
    }
}

void appendVariable(std::string &variable, std::string & str)
{
    if (variable.length() == 0)
        variable = str;
    else
        variable.append(" " + str);
}

void Parse::createClass()
{
    std::string header = File::Read(R"(../resources/HeaderTemplate.txt)");
    std::string source = File::Read(R"(../resources/SourceTemplate.txt)");
    for (size_t i = 0; i < this->_flags.size(); i++)
    {
        if (this->_flags[i].type == Type::File)
        {
            ParseStrings variables;
            variables._className = this->_flags[i].variable;
            for (size_t j = i + 1; j < this->_flags.size(); j++)
            {   
                switch (this->_flags[i].type)
                {
                    case Type::Location:
                        break;
                    case Type::Inherit:
                        break;
                    case Type::Interface:
                        break;
                    case Type::Namespace:
                        break;
                    default:
                        break;
                }
            }
        }
        else
            break;
    }
}