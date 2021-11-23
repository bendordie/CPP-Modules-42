/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 23:30:00 by cshells           #+#    #+#             */
/*   Updated: 2021/09/06 23:30:01 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "iter.hpp"

class Awesome {

public:
    Awesome(void): _n(42) { return; }
    int get(void) const { return this->_n; }

private:
    int _n;
};

std::ostream & operator<<(std::ostream & o, Awesome const & rhs) { o << rhs.get(); return o;}

template <typename T>
void    print(T const & x) { std::cout << x << std::endl; return; }

void increase(int const & value) {
    std::cout << value + 10 << " ";
}

void increase(char const & value) {
    std::cout << static_cast<char>(value + 10) << " ";
}

int main(int argc, char *argv[]) {
    int     i_arr[10] = { 0, 1, 2 , 3, 4, 5, 6, 7, 8, 9 };
    int     tab[] = { 0, 1, 2, 3, 4 };
    char    c_arr[12] = "Hello World";
    Awesome tab2[5];

    (void)argc;
    (void)argv;

    iter(tab, 5, print);
    iter(tab2, 5, print);
    std::cout << std::endl;

    /*----------------------------*/

    iter(i_arr, 10, increase);
    std::cout << std::endl;

    /*----------------------------*/

    iter(c_arr, 12, increase);

    return (0);
}
