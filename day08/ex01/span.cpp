/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 18:10:26 by zweng             #+#    #+#             */
/*   Updated: 2019/01/17 12:42:28 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n): _size(n)
{
}

Span::Span(const Span &obj)
{
    *this = obj;
}

Span    &Span::operator=(const Span &obj)
{
    this->_size = obj._size;
    this->_data = obj._data;
    return (*this);
}

Span::~Span(void) {}

void    Span::addNumber(int num)
{
    if (this->_size > this->_data.size())
        this->_data.push_back(num);
    else
        throw std::exception();
}

int     Span::shortestSpan(void)
{
    if (this->_size <= 1)
		throw std::exception();
    std::vector<int>		copy = this->_data;
	std::sort(copy.begin(), copy.end());
	std::vector<int>::iterator it  = copy.begin();
	std::vector<int>::iterator one = copy.begin();
	std::vector<int>::iterator two = copy.end();

    it++;
	two--;
	unsigned int i = 0;

	while (i < (_size - 1))
	{
		if (abs(*one - *it) < abs(*one - *two))
			two = it;
		else if (abs(*two - *it) < abs(*one - *two))
			one = it;
		i++;
		it++;
	}
	return (abs(*one - *two));

}

int     Span::longestSpan(void)
{
    if (_size <= 1)
		throw std::exception();
	std::vector<int>	max = this->_data;
	return(*std::max_element(max.begin(), max.end()) -
            *std::min_element(max.begin(), max.end()));
}
