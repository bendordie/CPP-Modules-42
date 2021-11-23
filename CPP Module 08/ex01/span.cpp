/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:25:32 by cshells           #+#    #+#             */
/*   Updated: 2021/09/08 23:25:33 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

#define ABS(x) (x < 0 ? x * -1 : x)

Span::Span() : size(0) {
}

Span::Span(unsigned int N) : size(N) {
    this->my_vector = new std::vector<int>;
}

Span::~Span() {
    delete this->my_vector;
}

Span::Span(const Span &other) {
    this->my_vector = new std::vector<int>;
    this->size = other.getSize();
    for (int i = 0; i < other.getSize(); i++) {
        this->my_vector[i] = other.my_vector[i];
    }
}

const Span &Span::operator=(const Span &other) {
    if (this == &other)
        return *this;
    delete this->my_vector;
    this->my_vector = new std::vector<int>;
    this->size = other.getSize();
    for (int i = 0; i < other.getSize(); i++) {
        this->my_vector[i] = other.my_vector[i];
    }
    return (*this);
}

int Span::shortestSpan() {
    int res;
    int diff;

    if (this->size > 1) {
        res = INT_MAX;
        for (int i = 0; i < static_cast<int>(this->my_vector->size()) - 1; i++) {
            diff = ABS((*this->my_vector)[i] - (*this->my_vector)[i + 1]);
            if (diff < res)
                res = diff;
        }
    }
    else
        throw SpanIsTooShort();
    return (res < 0 ? res * -1 : res);
}

int Span::getSize() const {
    return (this->size);
}

int Span::longestSpan() {

    std::vector<int>::iterator min;
    std::vector<int>::iterator max;

    min = std::min_element(this->my_vector->begin(), this->my_vector->end());
    max = std::max_element(this->my_vector->begin(), this->my_vector->end());

    return (*max - *min);
}

void Span::addNumber(int num) {
    if (static_cast<int>(this->my_vector->size()) < this->size)
        this->my_vector->push_back(num);
    else
        throw SpanIsFull();
}

const char* Span::SpanIsFull::what() const throw() {
    return ("Span is already full");
}

const char* Span::SpanIsTooShort::what() const throw() {
    return ("Span is too short");
}