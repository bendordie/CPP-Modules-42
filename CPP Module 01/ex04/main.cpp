/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 15:38:13 by cshells           #+#    #+#             */
/*   Updated: 2021/08/10 15:38:14 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    size_t i;
    size_t lenS1;
    std::string filename;
    std::string s1;
    std::string s2;
    std::string buf;
    std::fstream fin;
    std::fstream fout;

    if (argc == 4)
    {
        filename = argv[1];
        s1 = argv[2];
        s2 = argv[3];
        fin.open(filename);
        if (fin.is_open())
        {
            fout.open(filename + ".replace", std::fstream::out);
            if (fout.is_open())
            {
                lenS1 = s1.length();
                while (!fin.eof())
                {
                    i = 0;
                    buf.clear();
                    std::getline(fin, buf);
                    for (i = buf.find(s1, i); i != std::string::npos; i = buf.find(s1, i + s2.length())) {
                        buf.erase(i, lenS1);
                        buf.insert(i, s2);
                    }
                    if (buf.length() > 0)
                        fout << buf << "\n";
                }
            }
            else
                std::cout << "Exit: error: cannot create/open file " << filename \
                << ".replace" << std::endl;
        }
        else
            std::cout << "Exit: error: cannot open the file " << filename << std::endl;

    }
    else
        std::cout << "Exit: error: Wrong number of arguments (expected 3)" << std::endl;
    fin.close();
    fout.close();
    return (0);
}
