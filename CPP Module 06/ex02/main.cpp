/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 00:57:27 by cshells           #+#    #+#             */
/*   Updated: 2021/09/03 00:57:28 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base {

public:
    virtual ~Base() {};
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};

Base * generate() {
    if (clock() % 2 == 0) {
        std::cout << "[Class A] has been generated" << std::endl;
        return (static_cast<Base*>(new A()));
    }
    else if (clock() % 3 == 0) {
        std::cout << "[Class B] has been generated" << std::endl;
        return (static_cast<Base*>(new B()));
    }
    else
    {
        std::cout << "[Class C] has been generated" << std::endl;
        return (static_cast<Base*>(new C()));
    }
}

void identify(Base* p) {

    if (dynamic_cast<A*>(p))
        std::cout << "[Class A]" << std::endl;
    else
        std::cout << "Not A class" << std::endl;

    if (dynamic_cast<B*>(p))
        std::cout << "[Class B]" << std::endl;
    else
        std::cout << "Not B class" << std::endl;

    if (dynamic_cast<C*>(p))
        std::cout << "[Class C]" << std::endl;
    else
        std::cout << "Not C class" << std::endl;
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "[Class A]" << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Not A class" << std::endl;
    }
    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "[Class B]" << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Not B class" << std::endl;
    }
    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "[Class C]" << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Not C class" << std::endl;
    }
}

int main() {
    Base* res;

    res = generate();
    std::cout << std::endl;

    identify(res);
    std::cout << "--------------------------" << std::endl;
    identify(*res);

    return (0);
}
