/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:54:49 by cshells           #+#    #+#             */
/*   Updated: 2021/09/08 20:54:50 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main() {

    //case 1
    srand(time(NULL));
    std::vector<int> int_v;
    int needle;
    for (size_t i = 0; i < 10; i++)
        int_v.push_back(rand());
    for (size_t i = 0; i < int_v.size(); i++)
        std::cout << "|" << i << "|" << int_v[i] << std::endl;

    size_t	lucky = rand() % 10;
    needle = int_v[lucky];
    std::cout << "lucky number: |" << lucky << "|" << needle << std::endl;
    std::vector<int>::iterator result = easyFind(int_v, needle);
    std::cout << *result << std::endl << std::endl;

    //case 2
    try {
        easyFind(int_v, needle + 2);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
