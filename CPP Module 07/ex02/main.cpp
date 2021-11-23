/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 21:02:02 by cshells           #+#    #+#             */
/*   Updated: 2021/09/07 21:02:03 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}


//#include <iostream>
//#include "Array.hpp"
//
//int main() {
//    Array<int> A1(10);
//    Array<int> A2(5);
//    Array<char> A3(10);
////    Array<float> A4;
//
//    try {
//
//        std::cout << "A1: ";
//        for (int i = 0; i < 10; i++) {
//            A1[i] = i;
//            std::cout << A1[i] << " ";
//        }
//        std::cout << std::endl;
//
//        std::cout << "A2: ";
//        for (int i = 0; i < 5; i++) {
//            A2[i] = i * 5;
//            std::cout << A2[i] << " ";
//        }
//        std::cout << std::endl;
//
//        A1 = A2;
//        std::cout << "A1: ";
//        for (int i = 0; i < 10; i++) {
//            std::cout << A1[i] << " ";
//        }
//        std::cout << std::endl;
//
//        std::cout << "A3: ";
//        for (int i = 0; i < 10; i++) {
//            A3[i] = static_cast<char>(97 + i);
//            std::cout << A3[i] << " ";
//        }
//        std::cout << std::endl;
//        while (1) {
//
//        }
//    }
//
//    catch (std::exception &e) {
//        std::cout << "Invalid array index!" << std::endl;
//    }
//
//
//    return (0);
//}
