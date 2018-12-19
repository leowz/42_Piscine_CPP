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
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_val);
}

void    Fixed::setRawBits(int const raw)
{
    this->_val = raw;
}

const int    Fixed::_fractional = 8;
