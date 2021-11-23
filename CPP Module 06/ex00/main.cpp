/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:30:26 by cshells           #+#    #+#             */
/*   Updated: 2021/08/28 18:30:27 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

class NotChar : public std::exception {

public:

    NotChar();
    NotChar(const char* err_msg) : err_msg(err_msg) {};
    virtual const char* what() const throw() {
        return (this->err_msg);
    }

private:
    const char* err_msg;

};

bool    isInvalidChar(std::string str) {

    for (size_t i = 1; i < str.length(); i++) {
        if(isdigit(str[0]) && isprint(str[i]) && !isdigit(str[i]))
            return (1);
    }
    return (0);
}

bool    isChar(std::string str) {

    if (str.length() == 1 && std::isprint(str[0]))
        return (1);
    return (0);
}

bool    isNan(std::string str) {

    if (str == "inf" || str == "inff" || str == "-inf"
    || str == "+inf" || str == "-inff" || str == "+inff"
    || str == "nan" || str == "nanf")
        return (1);
    return (0);
}

void    outputChar(std::string arg) {
    char    tmp;

    if (isChar(arg))
        std::cout << "char: '" << arg[0] << "'" << std::endl;
    else
    {
        try {
            tmp = static_cast<char>(std::stod(arg));
            if (tmp > 31 && tmp < 127)
                std::cout << "char: '" << tmp << "'" << std::endl;
            else
                throw NotChar("Non displayable");
        }
        catch (NotChar &e) {
            std::cout << "char: " << e.what() << std::endl;
        }
        catch (std::exception &e) {
            std::cout << "char: impossible" << std::endl;
        }
    }
}

void    outputInt(std::string arg) {
    int     tmp;

    if (isChar(arg)) {
        tmp = static_cast<int>(arg[0]);
        std::cout << "int: " << tmp << std::endl;
    }
    else
    {
        try {
            tmp = static_cast<int>(std::stod(arg));

            std::cout << "int: " << tmp << std::endl;
        }
        catch (std::exception &e) {
            std::cout << "int: " << e.what() << std::endl;
        }
    }
}

void    outputFloat(std::string arg) {
    float   tmp;

    std::cout.precision(1);
    if (isChar(arg)) {
        tmp = static_cast<float>(arg[0]);
        std::cout << "float: " << std::fixed << tmp << "f" << std::endl;
    }
    else
    {
        try {
            tmp = static_cast<float>(std::stod(arg));
            std::cout << "float: " << std::fixed << tmp << "f" << std::endl;
        }
        catch (std::exception &e) {
            std::cout << "float: " << e.what() << std::endl;
        }
    }
}

void    outputDouble(std::string arg) {
    double  tmp;

    if (isChar(arg)) {
        tmp = static_cast<double>(arg[0]);
        std::cout << "double: " << std::fixed << tmp << std::endl;
    }
    else
    {
        try {
            tmp = std::stod(arg);
            std::cout << "double: " << std::fixed << tmp << std::endl;
        }
        catch (std::exception &e) {
            std::cout << "double: " << e.what() << std::endl;
        }
    }
}

int     main(int argc, char *argv[]) {
    std::string input = argv[1];

    if (argc != 2)
        std::cout << "Exit: Wrong number of arguments (expected 1)\n";
    else if (isInvalidChar(input)) {
        std::cout << "Exit: Alphanumeric string is forbidden\n";
    }
    else
    {
        if (isNan(input))
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: " << std::stof(input) << "f" << std::endl;
            std::cout << "double: " << std::stod(input) << std::endl;
        }
        else
        {
            outputChar(input);
            outputInt(input);
            outputFloat(input);
            outputDouble(input);
        }
    }

    return (0);
}