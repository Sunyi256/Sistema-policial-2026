#include "register_input.h"

bool hasDigit(const std::string &text)
{
    for (int i = 0; i < (int)text.size(); i++)
    {
        if (text[i] >= '0' && text[i] <= '9')
        {
            return true;
        }
    }
    return false;
}

bool isBlank(const std::string &text)
{
    return text.find_first_not_of(" \t") == std::string::npos;
}

bool readText(const std::string &fieldLabel, std::string &output)
{
    while (true)
    {
        if (!std::getline(std::cin, output))
        {
            return false;
        }
        if (isBlank(output))
        {
            std::cout << fieldLabel << " nao pode ficar vazio. Digite novamente: " << std::endl;
        }
        else if (hasDigit(output))
        {
            std::cout << fieldLabel << " nao pode conter numeros. Digite novamente: " << std::endl;
        }
        else
        {
            return true;
        }
    }
}
