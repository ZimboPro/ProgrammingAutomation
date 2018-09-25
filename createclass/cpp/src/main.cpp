#include <Inherit.hpp>
#include <Interface.hpp>
#include <Standard.hpp>
#include <Parse.hpp>

void printCommands()
{

}

int main(int ac, char **av)
{
    if (ac == 1)
        printCommands();
    else
    {
        Parse p;
        p.parseArguments(av, ac);
    }
    return (0);
}