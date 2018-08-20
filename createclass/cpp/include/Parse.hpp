#ifndef PARSE_HPP
#define PARSE_HPP

class Parse
{
    public:
        Parse();
        ~Parse();
        Parse(const Parse & src);

        Parse & operator=(const Parse & src);
        void parse(const char **commands, const int & count);

    private:
};

#endif