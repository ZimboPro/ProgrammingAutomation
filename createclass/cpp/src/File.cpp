#include <File.hpp>
#include <iostream>
#include <sstream>
#include <fstream>

bool File::Exists(std::string path)
{
    std::ifstream file(path);
    bool ans = file.good();
    file.close();
    if (!ans)
        std::cout << "File " << path << " does not exist." << std::endl;
    return ans;
}

std::string File::Read(std::string path)
{
    if (!Exists(path))
        return NULL;
    
    std::ifstream file(path);
    std::stringstream fileContent;
    std::string line;

    while (getline(file, line))
        fileContent << line << std::endl;
    
    return fileContent.str();
}