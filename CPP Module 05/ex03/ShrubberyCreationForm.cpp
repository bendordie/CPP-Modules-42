/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 02:12:35 by cshells           #+#    #+#             */
/*   Updated: 2021/08/26 02:12:36 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form() {

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
        Form("ShrubberyCreationForm", 145, 137) {
    this->setTarget(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) {
    *this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    if (this == &other)
        return (*this);
    this->setTarget(other.getTarget());
    this->setSigned(other.getSigned());
    return (*this);
}

void ShrubberyCreationForm::action() const {
    std::string     tree = "                                                  \n"
                           "                                                  \n"
                           "                                                  \n"
                           "                        **  .                     \n"
                           "                     *(,(%(&%/#/%/                \n"
                           "                    ##&&&*%&&#%#/#,               \n"
                           "                    *&&/*&(#%#//*((%#*            \n"
                           "                   (*/**//%%(%(#(//***,%*         \n"
                           "              .%#(#&&@##&%##%&&&%%((%(//(,        \n"
                           "              *%##%///##%%&&(@&%&&#/((//. ,/      \n"
                           "             *%(/##&&%/&&&&#%&&%%%(%%/%#%(/       \n"
                           "             *&&*./,,,&#%&&&&%&%%#%(%&%#%#%//     \n"
                           "             %(%%#&&%.%&%&#/&@%(#(@&@###( #       \n"
                           "           .(.#%@# /*%//&&%@&@(  /,####%(/(//     \n"
                           "      ((/#%&(#((/#%%(####%@&##,/(..%#(&#/(#//*    \n"
                           "     ./.*#,(%%%(#%#(##&%/#((%#%#(#%((##/#&%%(/    \n"
                           "          #((#%/#/%#&(%(##%%%%%(#(%%%%#&&###(.    \n"
                           "       (/&*(%#&&%%#(%(#/#&(/&&/&(%&##%(%%((#(     \n"
                           "     .###/%%&(#/*#/(##/  &,.&%( ,.   ..%  .,.     \n"
                           "    (*/##%&%(.*.(,,.%**#    @#,.@.#               \n"
                           "      * . /.,, / ,**,/#%.%(#%%/                   \n"
                           "                   * ((*.//(%&%/ #(/.             \n"
                           "                        .%/,&&%(/,                \n"
                           "                         ,. &%*( %(.              \n"
                           "                            &*,                   \n"
                           "                            &%,                   \n"
                           "                            &/,                   \n"
                           "                            &/*                   \n"
                           "                            @#*                   ";
    std::fstream    fout;

    fout.open(this->getTarget() + "_shrubbery", std::fstream::out);
    if (fout.is_open()) {
        fout << tree;
    }
}

