/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 15:59:30 by zweng             #+#    #+#             */
/*   Updated: 2019/01/15 18:05:13 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>
#include <iostream>

template <typename T>
class Array
{
    T       *_elems;
    int     _size;

public:
    Array(void): _elems(NULL), _size(0) {};

    Array(unsigned int n)
    {
        this->_elems = new T[n];
        this->_size = n;
    }

    Array(const Array<T> &obj)
    {
        *this = obj;
    }

    Array<T>    &operator=(const Array<T> &obj)
    {
        int     i;

        i = 0;
        if (this->size() > 0)
            delete this->_elems;
        this->_size = obj.size();
        this->_elems = new T[this->_size];
        
        while (i < this->_size)
        {
            this->_elems[i] = obj._elems[i];
            i++;
        }

        return (*this);
    }
    virtual ~Array(void) {};

    T           &operator[](unsigned int n)
    {
        if (n >= this->size())
            throw std::exception();
        return (this->_elems[n]);
    }

    unsigned int    size(void) const
    {
        return (this->_size);
    }

    void        show(void) const
    {
        unsigned int     i;

        i = 0;
        while (i < this->size())
        {
            std::cout << this->_elems[i] << std::endl; 
            i++;
        }
    }
};
#endif
