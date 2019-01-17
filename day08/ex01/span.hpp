/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 18:10:56 by zweng             #+#    #+#             */
/*   Updated: 2019/01/16 18:19:27 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
    std::vector<int>    _data;
    unsigned int        _size;

public:
    Span(void);
    Span(unsigned int n);
    Span(const Span &);
    Span    &operator=(const Span &);
    ~Span(void);

    void    addNumber(int num);
    int     shortestSpan(void);
    int     longestSpan(void);
};

#endif
