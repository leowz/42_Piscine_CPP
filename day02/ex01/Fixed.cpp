/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:24:35 by zweng             #+#    #+#             */
/*   Updated: 2019/01/09 10:24:36 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->_val = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called" << std::endl;
    setRawBits(val << _fractional);
}

Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(val * (1 << _fractional)));
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Assignation operator called " << std::endl;
    this->setRawBits(obj.getRawBits());
    return (*this);
}

int     Fixed::getRawBits(void) const
{
    return (this->_val);
}

void    Fixed::setRawBits(int const raw)
{
    this->_val = raw;
}

float   Fixed::toFloat(void) const
{
    return ((float)getRawBits() / (1 << _fractional));
}

int     Fixed::toInt(void) const
{
    return (getRawBits() >> _fractional);
}

std::ostream    &operator<<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return (os);
}

const int   Fixed::_fractional = 8;
