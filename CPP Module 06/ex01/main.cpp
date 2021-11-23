/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 00:27:54 by cshells           #+#    #+#             */
/*   Updated: 2021/09/03 00:27:55 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct  s_data {
    int         num;
    std::string str;
}               Data;

uintptr_t   serialize(Data* ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*       deserialized(uintptr_t raw) {
    return (reinterpret_cast<Data*>(raw));
}

int     main() {
    Data data;
    Data *result;

    data.num = 2142;
    data.str = "Hello World!\n";
    result = deserialized(serialize(&data));
    std::cout << result->str << result->num << std::endl;

    return (0);
}
