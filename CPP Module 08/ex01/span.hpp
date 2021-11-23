/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:25:42 by cshells           #+#    #+#             */
/*   Updated: 2021/09/08 23:25:43 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SPAN_H__
#define __SPAN_H__

#include <iostream>
#include <vector>

class Span {

public:

    Span(unsigned int N);
    ~Span();
    Span(Span const & other);
    Span const & operator=(Span const & other);

    int     shortestSpan();
    int     longestSpan();

    void    addNumber(int num);


    class SpanIsFull : public std::exception {
        virtual const char* what() const throw();
    };

    class SpanIsTooShort : public std::exception {
    virtual const char* what() const throw();
    };


private:
    const int           size;
    std::vector<int>    *my_vector;


protected:
    Span();

};

#endif
